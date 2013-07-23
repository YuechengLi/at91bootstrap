/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support
 * ----------------------------------------------------------------------------
 * Copyright (c) 2010, Atmel Corporation

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
#include "arch/at91_uart.h"

static unsigned int uart_base_addr;

static inline void write_uart(unsigned int offset, const unsigned int value)
{
	writel(value, offset + uart_base_addr);
}

static inline unsigned int read_uart(unsigned int offset)
{
	return readl(offset + uart_base_addr);
}

static int uart_init(unsigned int base_addr, unsigned int baudrate)
{
	/* Disable interrupts */
	write_uart(US_IDR, -1);

	/* Reset the receiver and transmitter */
	write_uart(US_CR, AT91C_US_RSTRX | AT91C_US_RSTTX
			| AT91C_US_RXDIS | AT91C_US_TXDIS);

	/* Configure the baudrate */
	write_uart(US_BRGR, baudrate);

	/* Set the mode register */
	if (base_addr == AT91C_BASE_DBGU) {
		write_uart(US_MR, AT91C_US_PAR_NO);
	} else {
		write_uart(US_MR, AT91C_US_USART_MODE_NORMAL
			   | AT91C_US_USCLKS_MCK
			   | AT91C_US_CHRL_8_BIT
			   | AT91C_US_PAR_NO
			   | AT91C_US_NBSTOP_1_BIT);
	}

	/* Enable RX and Tx */
	write_uart(US_CR, AT91C_US_RXEN | AT91C_US_TXEN);

	return 0;
}

static void uart_print(const char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		while (!(read_uart(US_CSR) & AT91C_US_TXRDY)) ;
		write_uart(US_THR, str[i]);
		i++;
	}
}

int console_init(unsigned int base_addr, unsigned int baudrate)
{
	uart_base_addr = base_addr;

	uart_init(base_addr, baudrate);

	return 0;
}

void console_print(const char *str)
{
	uart_print(str);
}
