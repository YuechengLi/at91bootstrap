/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support
 * ----------------------------------------------------------------------------
 * Copyright (c) 2006, Atmel Corporation

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
#ifndef __AT91_UART_H__
#define __AT91_UART_H__

/*** Register offset in AT91C USART structure ***/
#define US_CR		0x0000 	/* Control Register */
#define US_MR		0x0004	/* Mode Register */
#define US_IER		0x0008	/* Interrupt Enable Register */
#define US_IDR		0x000C	/* Interrupt Disable Register */
#define US_IMR		0x0010	/* Interrupt Mask Register */
#define US_CSR		0x0014	/* Channel Status Register */
#define US_RHR		0x0018	/* Receiver Holding Register */
#define US_THR		0x001C	/* Transmitter Holding Register */
#define US_BRGR		0x0020	/* Baud Rate Generator Register */
#define US_RTOR		0x0024	/* Receiver Time-out Register */
#define US_TTGR		0x0028	/* Transmitter Timeguard Register */
#define US_FIDI		0x0040	/* FI DI Ratio Register */
#define US_NER		0x0044	/* Number of Errors Register */
#define US_IF		0x004C	/* IrDA Filter Register */
#define US_MAN		0x0050	/* Manchester Encoder Decoder Register */
#define US_WPMR		0x00E4	/* Write Protect Mode Register */
#define US_WPSR		0x00E8	/* Write Protect Status Register */


/*--- US_CR (offset: 0x0000) USART Control Register ---*/
#define AT91C_US_RSTRX		(0x01 << 2)
#define AT91C_US_RSTTX		(0x01 << 3)
#define	AT91C_US_RXEN		(0x01 << 4)
#define AT91C_US_RXDIS		(0x01 << 5)
#define AT91C_US_TXEN		(0x01 << 6)
#define AT91C_US_TXDIS		(0x01 << 7)
#define AT91C_US_RSTSTA		(0x01 << 8)
#define AT91C_US_STTBRK		(0x01 << 9)
#define AT91C_US_STPBRK		(0x01 << 10)
#define AT91C_US_STTTO		(0x01 << 11)
#define AT91C_US_SENDA		(0x01 << 12)
#define AT91C_US_RSTIT		(0x01 << 13)
#define AT91C_US_RSTNACK	(0x01 << 14)
#define AT91C_US_RETTO		(0x01 << 15)
#define AT91C_US_RTSEN		(0x01 << 18)
#define AT91C_US_RTSDIS		(0x01 << 19)

/*-- US_MR (offset: 0x004) USART Mode Register ---*/
#define AT91C_US_USART_MODE	(0x0f << 0)
#define		AT91C_US_USART_MODE_NORMAL		(0x00 << 0)
#define		AT91C_US_USART_MODE_RS485		(0x01 << 0)
#define		AT91C_US_USART_MODE_HW_HANDSHAKING	(0x02 << 0)
#define		AT91C_US_USART_MODE_ISO7816_T_0		(0x04 << 0)
#define		AT91C_US_USART_MODE_ISO7816_T_1		(0x06 << 0)
#define		AT91C_US_USART_MODE_IRDA		(0x08 << 0)
#define		AT91C_US_USART_MODE_SPI_MASTER		(0x0E << 0)
#define		AT91C_US_USART_MODE_SPI_SLAVE		(0x0F << 0)
#define AT91C_US_USCLKS		(0x03 << 4)
#define		AT91C_US_USCLKS_MCK		(0x00 << 4)
#define		AT91C_US_USCLKS_DIV		(0x01 << 4)
#define		AT91C_US_USCLKS_SCK		(0x02 << 4)
#define AT91C_US_CHRL		(0x03 << 6)
#define 	AT91C_US_CHRL_5_BIT		(0x00 << 6)
#define 	AT91C_US_CHRL_6_BIT		(0x01 << 6)
#define 	AT91C_US_CHRL_7_BIT		(0x02 << 6)
#define 	AT91C_US_CHRL_8_BIT		(0x03 << 6)
#define AT91C_US_SYNC		(0x01 << 8)
#define AT91C_US_PAR		(0x07 << 9)
#define 	AT91C_US_PAR_EVEN		(0x00 << 9)
#define 	AT91C_US_PAR_ODD		(0x01 << 9)
#define 	AT91C_US_PAR_SPACE		(0x02 << 9)
#define 	AT91C_US_PAR_MARK		(0x03 << 9)
#define 	AT91C_US_PAR_NO			(0x04 << 9)
#define 	AT91C_US_PAR_MULTIDROP		(0x06 << 9)
#define AT91C_US_NBSTOP		(0x03 << 12)
#define 	AT91C_US_NBSTOP_1_BIT		(0x00 << 12)
#define 	AT91C_US_NBSTOP_1_5_BIT		(0x01 << 12)
#define 	AT91C_US_NBSTOP_2_BIT		(0x02 << 12)
#define AT91C_US_CHMODE		(0x03 << 14)
#define 	AT91C_US_CHMODE_NORMAL		(0x00 << 14)
#define 	AT91C_US_CHMODE_AUTOMATIC	(0x01 << 14)
#define 	AT91C_US_CHMODE_LOCAL_LOOPBACK	(0x02 << 14)
#define 	AT91C_US_CHMODE_REMOTE_LOOPBACK	(0x03 << 14)
#define AT91C_US_MSBF		(0x01 << 16)
#define AT91C_US_MODE9		(0x01 << 17)
#define AT91C_US_CLKO		(0x01 << 18)
#define AT91C_US_OVER		(0x01 << 19)
#define AT91C_US_INACK		(0x01 << 20)
#define AT91C_US_DSNACK		(0x01 << 21)
#define AT91C_US_VAR_SYNC	(0x01 << 22)
#define AT91C_US_INVDATA	(0x01 << 23)
#define AT91C_US_MAX_ITERATION	(0x07 << 24)
#define AT91C_US_FILTER		(0x01 << 28)
#define AT91C_US_MAN		(0x01 << 29)
#define AT91C_US_MODSYNC	(0x01 << 30)
#define AT91C_US_ONEBIT		(0x01 << 31)

/*--- US_IER (offset: 0x0008) USART Interrupt Enable Register ---*/
#define AT91C_US_RXRDY		(0x01 << 0)
#define AT91C_US_TXRDY		(0x01 << 1)
#define AT91C_US_RXBRK		(0x01 << 2)
#define AT91C_US_OVRE		(0x01 << 5)
#define AT91C_US_FRAME		(0x01 << 6)
#define AT91C_US_PARE		(0x01 << 7)
#define AT91C_US_TIMEOUT	(0x01 << 8)
#define AT91C_US_TXEMPTY	(0x01 << 9)
#define AT91C_US_ITER		(0x01 << 10)
#define AT91C_US_NACK		(0x01 << 13)
#define AT91C_US_CTSIC		(0x01 << 19)
#define AT91C_US_MANE		(0x01 << 24)

#endif /* #ifndef __AT91_UART_H__ */
