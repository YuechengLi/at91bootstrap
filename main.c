/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support  -  ROUSSET  -
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
 * ----------------------------------------------------------------------------
 * File Name           : main.c
 * Object              :
 * Creation            : ODi Apr 19th 2006
 *-----------------------------------------------------------------------------
 */
#include "part.h"
#include "main.h"
#include "dbgu.h"
#include "debug.h"
#include "dataflash.h"
#include "nandflash.h"
#include "flash.h"
#ifdef CONFIG_USER_HW_INIT
void	user_hw_init(void);
#endif

/*------------------------------------------------------------------------------*/
/* Function Name       : main							*/
/* Object              : Main function						*/
/* Input Parameters    : none							*/
/* Output Parameters   : True							*/
/*------------------------------------------------------------------------------*/
int main(void)
{
	/* ================== 1st step: Hardware Initialization ================= */
	/* Performs the hardware initialization */
#ifdef CONFIG_HW_INIT
	hw_init();
#endif

#ifdef CONFIG_USER_HW_INIT
	user_hw_init();
#endif

	/* ==================== 2nd step: Load from media ==================== */
	/* Load from Dataflash in RAM */
#if defined(CONFIG_DATAFLASH) || defined(CONFIG_DATAFLASH_CARD)
	do {
		if(load_df(
			AT91C_SPI_PCS_DATAFLASH, 
			IMG_ADDRESS, 
			IMG_SIZE, 
			JUMP_ADDR) 
			== FAILURE) {
			// dbg_print_cr(">Valid image not found");
			{ volatile unsigned int loop; for(loop = 200000; loop > 0; loop--);}
		} else {
			// dbg_print_cr(">Valid image found");
			break;
		}
	} while (1);
#endif

	/* Load from Nandflash in RAM */
#ifdef CONFIG_NANDFLASH
#ifdef CONFIG_LOAD_LINUX
	{
		extern void *LoadLinux();
		LoadLinux();
	}
#else
	read_nandflash((unsigned char *)JUMP_ADDR, (unsigned long)IMG_ADDRESS, (int)IMG_SIZE);
#endif
#endif

	/* Load from Norflash in RAM */
#ifdef CONFIG_FLASH
	load_norflash(IMG_ADDRESS, IMG_SIZE, JUMP_ADDR);
#endif

	/* ==================== 3rd step:  Process the Image =================== */
	/* Uncompress the image */
#ifdef CONFIG_GUNZIP
	decompress_image((void *)IMG_ADDRESS, (void *)JUMP_ADDR, IMG_SIZE);	/* NOT IMPLEMENTED YET */
	msg_print(MSG_DECOMPRESS);
#endif

	/* ==================== 4th step: Start the application =================== */
	/* Set linux arguments */
#ifdef CONFIG_LINUX_ARG
	linux_arg(LINUX_ARG);	/* NOT IMPLEMENTED YET */
	msg_print(MSG_LINUX);
#endif /* LINUX_ARG */

	//msg_print(MSG_PROMPT);
	//msg_print_status(MSG_START,JUMP_ADDR);
	/* Jump to the Image Address */
	return JUMP_ADDR;
}

