/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support
 * ----------------------------------------------------------------------------
 * Copyright (c) 2013, Atmel Corporation

 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaiimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#include "hardware.h"
#include "twi.h"
#include "timer.h"
#include "debug.h"

/*
 * SiI9022 Slave Device Address
 */
#define SiI9022_ADDR	(0x39)

/*
 * SiI9022 Global Register Map
 */
#define TPI_DEVICE_POWER_STATE_CTRL_REG	(0x1E)
#define TPI_DEVICE_ID			(0x1B)
#define TMDS_CONT_REG			(0x82)
#define TPI_INTERRUPT_ENABLE_REG	(0x3C)
#define TPI_INTERRUPT_STATUS_REG	(0x3D)
#define TPI_ENABLE			(0xC7)

/*
 * Field Definitions.
 */
#define HOT_PLUG_EVENT			(0x01)

#define TX_POWER_STATE_MASK		(0x03)
#define TX_POWER_STATE_D0		(0x00)
#define TX_POWER_STATE_D1		(0x01)
#define TX_POWER_STATE_D2		(0x02)
#define TX_POWER_STATE_D3		(0x03)

#define SiI9022_DEVICE_ID		(0xB0)

static int SiI9022_read(unsigned char reg_addr, unsigned char *data)
{
	int ret;

	ret = twi_read(SiI9022_ADDR, reg_addr, 1, (unsigned char *)data, 1);
	if (ret) {
		dbg_info("SiI9022: Failed to read\n");
		return -1;
	}

	mdelay(50);

	return 0;
}

static int SiI9022_write(unsigned char reg_addr, unsigned char data)
{
	int ret;

	ret = twi_write(SiI9022_ADDR, reg_addr, 1, &data, 1);
	if (ret) {
		dbg_info("SiI9022: Failed to write\n\r");
		return -1;
	}

	mdelay(50);

	return 0;
}

extern void HDMI_Qt1070_workaround(void);

static int SiI9022_TxHW_Reset(void)
{
	int ret;

	/* Set terminations to default. */
	ret = SiI9022_write(TMDS_CONT_REG, 0x25);
	if (ret)
		return -1;

	/* HW debounce to 64ms (0x14) */
	ret = SiI9022_write(0x7C, 0x14);
	if (ret)
		return -1;

	return 0;
}

int SiI9022_enter_power_state_D3_Cold(void)
{
	unsigned char power_state = 0;
	unsigned char device_id = 0;
	unsigned int timeout = 10;
	int ret;

	/*
	 * D3 cold Note:It is necessary to unplug the HDMI connector,
	 * otherwise would not go to D3 cold.
	 */

	/* 1. Clear any pending interrupts via TPI 0x3D */
	ret = SiI9022_write(TPI_INTERRUPT_STATUS_REG, 0xFF);
	if (ret) {
		dbg_info("SiI9022: Failed to clear any pending interrupts\n");
		return -1;
	}
	/* 2. Reset SiI9022A Tx via HW */
	ret = SiI9022_TxHW_Reset();
	if (ret) {
		dbg_info("SiI9022: Failed to reset\n");
		return -1;
	}

	do {
		/* 3. Write device register 0xC7 = 0x00 to enter TPI mode */
		ret = SiI9022_write(TPI_ENABLE, 0x00);
		if (ret) {
			dbg_info("SiI9022: Failed to enter TPI mode\n");
		}

		mdelay(100);

		power_state = TX_POWER_STATE_D0;
		ret = SiI9022_write(TPI_DEVICE_POWER_STATE_CTRL_REG, power_state);
		if (ret) {
			dbg_info("SiI9022: Failed to write TPI 0x1E\n");
			return -1;
		}

		ret = SiI9022_read(TPI_DEVICE_ID, &device_id);
		if (ret) {
			dbg_info("SiI9022: Failed to 0x1b\n");
		}
	} while ((--timeout) && (device_id == 0x0));

	if (device_id != SiI9022_DEVICE_ID) {
		dbg_info("SiI9022: Not found\n");
		return -1;
	}

	/* 4. Set INT# source to Hotplug via TPI 0x3C[0] = 1b */
	ret = SiI9022_write(TPI_INTERRUPT_ENABLE_REG, HOT_PLUG_EVENT | 0x08);
	if (ret) {
		dbg_info("SiI9022: Failed to Set INT# source to Hotplug\n");
		return -1;
	}

	/* 5. Clear any pending interrupts via TPI 0x3D*/
	ret = SiI9022_write(TPI_INTERRUPT_STATUS_REG, 0xFF);
	if (ret) {
		dbg_info("SiI9022: Failed to clear any pending interrupts\n");
		return -1;
	}

	/* 6. Enter D3 Cold mode via TPI 0x1E[1:0] = 11b */
	power_state = 0x04;
	ret = SiI9022_write(TPI_DEVICE_POWER_STATE_CTRL_REG, power_state);
	if (ret) {
		dbg_info("SiI9022: Failed to write TPI 0x1E\n");
		return -1;
	}

	power_state &= ~TX_POWER_STATE_MASK;
	power_state |= TX_POWER_STATE_D3;
	ret = SiI9022_write(TPI_DEVICE_POWER_STATE_CTRL_REG, power_state);
	if (ret) {
		dbg_info("SiI9022: Failed to write TPI 0x1E\n");
		return -1;
	}

	dbg_info("HDMI SiI9022: Enter D3 Cold mode\n");

	return 0;
}

/* ------------------------------------------------------------------- */

/*
 * WM8904 Register MAP.
 */
#define WM8904_SW_RESET_AND_ID		(0x00)
#define WM8904_REVISION			(0x01)
#define WM8904_BIAS_CONTROL_0		(0x04)
#define WM8904_VMID_CONTROL_0		(0x05)

/*
 * Field Definitions.
 */

/*
 * R4 (0x04) - Bias Control 0
 */
#define WM8904_BIAS_ENA			(0x0001)	/* BIAS_ENA */

/*
 * R5 (0x05) - VMID Control 0
 */
#define WM8904_VMID_ENA			(0x0001)	/* VMID_ENA */
#define WM8904_VMID_RES			(0x0006)	/* VMID_RES - [2:1] */
#define WM8904_VMID_BUF_ENA		(0x0040)	/* VMID_BUF_ENA */

/*
 * WM8904 Slave Device Address
 */
#define WM8904_ADDR		(0x1a)

static int wm8904_read(unsigned char reg_addr, unsigned short *data)
{
	int ret;

	ret = twi_read(WM8904_ADDR, reg_addr, 1, (unsigned char *)data, 2);
	if (ret) {
		dbg_info("wm8904: Failed to read\n");
		return -1;
	}

	mdelay(50);

	return 0;
}

static int wm8904_write(unsigned char reg_addr, unsigned short data)
{
	int ret;

	ret = twi_write(WM8904_ADDR, reg_addr, 1, (unsigned char *)&data, 2);
	if (ret) {
		dbg_info("wm8904: Failed to write\n");
		return -1;
	}

	mdelay(50);

	return 0;
}

static int wm8904_chipid(void)
{
	unsigned short reg = 0;
	unsigned short chipID;
	int ret;

	ret = wm8904_read(WM8904_SW_RESET_AND_ID, &reg);
	if (ret)
		return -1;

	chipID = ((reg << 8) & 0xff00) | ((reg >> 8) & 0x00ff);

	return (chipID == 0x8904) ? 0 : -1;
}

static int wm8904_version(void)
{
	unsigned short reg = 0;
	int ret;

	ret = wm8904_read(WM8904_REVISION, &reg);
	if (ret)
		return -1;

	return reg + 'A';
}

static int wm8904_reset(void)
{
	int ret;

	ret = wm8904_write(WM8904_SW_RESET_AND_ID, 0);
	if (ret)
		return -1;

	return 0;
}

static int wm8904_disable_vmid_ref(void)
{
	unsigned short reg = 0;
	int ret;

	ret = wm8904_read(WM8904_VMID_CONTROL_0, &reg);
	if (ret)
		return -1;

	reg &= ~WM8904_VMID_ENA;
	reg &= ~WM8904_VMID_RES;
	ret = wm8904_write(WM8904_VMID_CONTROL_0, reg);
	if (ret)
		return -1;

	return 0;
}

static int wm8904_disable_bias(void)
{
	unsigned short reg = 0;
	int ret;

	ret = wm8904_read(WM8904_BIAS_CONTROL_0, &reg);
	if (ret)
		return -1;

	reg &= ~WM8904_BIAS_ENA;
	ret = wm8904_write(WM8904_BIAS_CONTROL_0, reg);
	if (ret)
		return -1;

	return 0;
}

int wm8904_enter_low_power(void)
{
	int ret;

	ret = wm8904_chipid();
	if (ret == -1) {
		dbg_info("wm8904: Failed to read Chip ID\n");
		return -1;
	}

	ret = wm8904_version();
	if (ret == -1) {
		dbg_info("wm8904: Failed to read version\n");
		return -1;
	}

	ret = wm8904_reset();
	if (ret) {
		dbg_info("wm8904: Failed to issue software reset\n");
		return -1;
	}

	ret = wm8904_disable_vmid_ref();
	if (ret) {
		dbg_info("wm8904: Failed to disable VMID Control 0\n");
		return -1;
	}

	ret = wm8904_disable_bias();
	if (ret) {
		dbg_info("wm8904: Failed to disable Bias Control 0\n");
		return -1;
	}

	dbg_info("wm8904: Enter low power mode\n");

	return 0;
}
