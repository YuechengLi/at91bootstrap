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
#include "arch/at91_rstc.h"

/*
 * slowclock cycle 1000/32768 = 0.0305ms
 * the external reset length is 15ms
 */
#define EXTERNAL_RESET_LENGTH	8

static inline void rstc_reg_write(unsigned int offset, unsigned int value)
{
	writel(value, AT91C_BASE_RSTC + offset);
}

static inline unsigned int rstc_reg_read(unsigned int offset)
{
	return readl(AT91C_BASE_RSTC + offset);
}

void rstc_reset_all(void)
{
	unsigned int timeout = 100000;

	/* set external reset length */
	rstc_reg_write(RSTC_RMR, AT91C_RSTC_ERSTL(EXTERNAL_RESET_LENGTH)
					| AT91C_RSTC_KEY_UNLOCK);

	/* assert the NRST pin and reset the processor and the peripherals */
	rstc_reg_write(RSTC_RCR, (AT91C_RSTC_EXTRST | AT91C_RSTC_KEY));

	while(rstc_reg_read(RSTC_RSR) & AT91C_RSTC_SRCMP);

	while (--timeout)
		;
}
