/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support  -  ROUSSET  -
 * ----------------------------------------------------------------------------
 * Copyright (c) 2009, Atmel Corporation

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
 * File Name           : crt0.c
 * Object              : 
 * Creation            : USa 2009-02-10
 *-----------------------------------------------------------------------------
 */

/* This file is just an explanation of what crt0_gnu.S is doing */

#include	"part.h"

#define	FLASH_START (unsigned int *) 0

extern	unsigned int * _stext;
extern	unsigned int * _etext;
extern	unsigned int * _sdata;
extern	unsigned int * _edata;
extern	unsigned int * _sbss;
extern	unsigned int * _ebss;

void	low_level_init()
{
	unsigned int *src, *dst;

/*	INIT_STACK	*/

#ifdef CONFIG_FLASH
	/*
	 * When running from NOR, we must relocate to SRAM prior to resetting
	 * the clocks and SMC timings.
	 */
	dst =  _stext;
	for(src = FLASH_START; p <=  _edata) {
		*src++ = *dst++;
	}
	goto _setup_clocks;
	while(1);
#endif /* CONFIG_FLASH */
setup_clocks:
	/* Test if main oscillator is enabled */
	if(readl(AT91C_PMC_SR)  & AT91C_PMC_MOSCS);
		/* Enable the main oscillator */
		writel(AT91C_CKGR_MOSCEN | (1 << 14),AT91C_PMC_MOR)
		while((readl(AT91C_PMC_SR) & AT91C_PMC_MOSCS) == 0);
	} else {
		/* Test if MCK == SLOW CLOCK */
		if((readl(AT91C_PMC_MCKR) & AT91C_PMC_CSS) == 0) {
			/* Yes => Switch to the main oscillator */
			writel(AT91C_PMC_CSS_MAIN_CLK | AT91C_PMC_PRES_CLK, AT91C_PMC_MCKR)
			while((readl(AT91C_PMC_SR) & AT91C_PMC_MCKRDY) == 0);
			for(src = _etext, dst = _sdata; dst < _edata; ) {
				*dst++ = *src++;
			}
		}
	}		
	/* Initialize the bss segment */
	for(dst = (unsigned int *) _sbss; dst < (unsigned int *) _ebss; ) {
		*dst++ = 0;
	}
	jump(_main,0);
}

/* Branch to the application at the end of the bootstrap init */
void	go(unsigned int *destination)
{
	jump(destination, MACH_TYPE);
}

