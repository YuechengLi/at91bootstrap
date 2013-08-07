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
 * this list of conditions and the disclaimer below.
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
#include "common.h"
#include "hardware.h"
#include "arch/tz_matrix.h"

#define MATRIX_AXIMX	1
#define MATRIX_H64MX	2
#define MATRIX_H32MX	3

#define SECURITY_TYPE_AS	1
#define SECURITY_TYPE_NS	2
#define	SECURITY_TYPE_PS	3

struct peri_security {
	unsigned int	peri_id;
	unsigned int	matrix;
	unsigned int	security_type;
};

static const struct peri_security peri_security_array[] = {
	/* SAIC */
	{
		.peri_id = AT91C_ID_SAIC,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_AS,
	},
	/* VDEC */
	{
		.peri_id = AT91C_ID_VDEC,
		.matrix = MATRIX_H64MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* PIOA*/
	{
		.peri_id = AT91C_ID_PIOA,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* PIOB*/
	{
		.peri_id = AT91C_ID_PIOB,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* PIOC*/
	{
		.peri_id = AT91C_ID_PIOC,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* PIOE*/
	{
		.peri_id = AT91C_ID_PIOE,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* PIOE*/
	{
		.peri_id = AT91C_ID_PIOE,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* UART0 */
	{
		.peri_id = AT91C_ID_UART0,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* UART1 */
	{
		.peri_id = AT91C_ID_UART1,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* USART2 */
	{
		.peri_id = AT91C_ID_USART2,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* USART3 */
	{
		.peri_id = AT91C_ID_USART3,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* USART4 */
	{
		.peri_id = AT91C_ID_USART4,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* TWI0 */
	{
		.peri_id = AT91C_ID_TWI0,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* TWI1 */
	{
		.peri_id = AT91C_ID_TWI1,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* TWI2 */
	{
		.peri_id = AT91C_ID_TWI2,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* HSMCI0 */
	{
		.peri_id = AT91C_ID_HSMCI0,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* HSMCI1 */
	{
		.peri_id = AT91C_ID_HSMCI1,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* SPI0 */
	{
		.peri_id = AT91C_ID_SPI0,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* SPI1 */
	{
		.peri_id = AT91C_ID_SPI1,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* SPI2 */
	{
		.peri_id = AT91C_ID_SPI2,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* TC0 */
	{
		.peri_id = AT91C_ID_TC0,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* TC1 */
	{
		.peri_id = AT91C_ID_TC1,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* TC2 */
	{
		.peri_id = AT91C_ID_TC2,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* PWM */
	{
		.peri_id = AT91C_ID_PWM,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* ADC */
	{
		.peri_id = AT91C_ID_ADC,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* DBGU */
	{
		.peri_id = AT91C_ID_DBGU,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* UHPHS */
	{
		.peri_id = AT91C_ID_UHPHS,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* UDPHS */
	{
		.peri_id = AT91C_ID_UDPHS,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* SSC0 */
	{
		.peri_id = AT91C_ID_SSC0,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* SSC1 */
	{
		.peri_id = AT91C_ID_SSC1,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* XDMAC1 */
	{
		.peri_id = AT91C_ID_XDMAC1,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_NS,
	},
	/* LCDC */
	{
		.peri_id = AT91C_ID_LCDC,
		.matrix = MATRIX_H64MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* ISI */
	{
		.peri_id = AT91C_ID_ISI,
		.matrix = MATRIX_H64MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* TRNG */
	{
		.peri_id = AT91C_ID_TRNG,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
	/* GMAC */
	{
		.peri_id = AT91C_ID_GMAC,
		.matrix = MATRIX_H32MX,
		.security_type = SECURITY_TYPE_PS,
	},
};


static inline void matrix_write(unsigned int base,
				unsigned int offset,
				const unsigned int value)
{
	writel(value, offset + base);
}

static inline unsigned int matrix_read(int base, unsigned int offset)
{
	return readl(offset + base);
}

void matrix_write_enable(unsigned int matrix_base)
{
	matrix_write(matrix_base, MATRIX_WPMR,
		(MATRIX_WPMR_WPKEY_PASSWD | MATRIX_WPMR_WPEN_ENABLE));
}

void matrix_write_disable(unsigned int matrix_base)
{
	matrix_write(matrix_base, MATRIX_WPMR, MATRIX_WPMR_WPKEY_PASSWD);
}

void matrix_configure_slave_security(unsigned int matrix_base,
				unsigned int slave,
				unsigned int srtop_setting,
				unsigned int srsplit_setting,
				unsigned int ssr_setting)
{

	matrix_write(matrix_base, MATRIX_SSR(slave), ssr_setting);
	matrix_write(matrix_base, MATRIX_SRTSR(slave), srtop_setting);
	matrix_write(matrix_base, MATRIX_SASSR(slave), srsplit_setting);
}

static struct peri_security *get_peri_security(unsigned int peri_id)
{
	unsigned int i;

	for (i = 0; i < ARRAY_SIZE(peri_security_array); i++) {
		if (peri_id == peri_security_array[i].peri_id)
			break;
	}

	return ((i == ARRAY_SIZE(peri_security_array))) ?
			NULL : (struct peri_security *)&peri_security_array[i];
}

int matrix_configure_peri_security(unsigned int *peri_id_array,
					unsigned int size)
{
	unsigned int i;
	unsigned int *peri_id_p;
	unsigned int peri_id;
	struct peri_security *periperal_sec;
	unsigned int base;
	unsigned int h32mx_spselr[3], h64mx_spselr[3];
	unsigned int spselr;
	unsigned int n;

	if ((peri_id_array == NULL) || (size == 0))
		return -1;

	for (i = 0; i < 3; i++) {
		h32mx_spselr[i] = matrix_read(AT91C_BASE_MATRIX32,
						MATRIX_SPSELR(i));
		h64mx_spselr[i] = matrix_read(AT91C_BASE_MATRIX64,
						MATRIX_SPSELR(i));
	}

	peri_id_p = peri_id_array;
	for (i = 0; i < size; i++) {
		periperal_sec = get_peri_security(*peri_id_p);
		if (periperal_sec == NULL)
			return -1;

		if (periperal_sec->security_type != SECURITY_TYPE_PS)
			return -1;

		peri_id = *peri_id_p;
		n = peri_id / 32;
		if (periperal_sec->matrix == MATRIX_H32MX) {
			base = AT91C_BASE_MATRIX32;
			spselr = h32mx_spselr[n];
		} else {
			base = AT91C_BASE_MATRIX64;
			spselr = h64mx_spselr[n];
		}

		spselr |= peri_id % 32;

		matrix_write(base, MATRIX_SPSELR(n), spselr);

		peri_id_p++;
	}

	return 0;
}
