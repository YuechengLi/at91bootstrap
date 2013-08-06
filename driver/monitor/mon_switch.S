/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support
 * ----------------------------------------------------------------------------
 * Copyright (c) 2013, Atmel Corporation
 *
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
#include <mon_macros.h>
#include "arch/at91_pio.h"

.section monitor_handler_sec
	.text
	.align

	.global monitor_smc_handler

#define	PIOE_BASE_ADDR		0xfc06d000

	.macro  led_d8_on
	mov	r1, #0x01
	mov 	r0, r1, lsl #28
	ldr	r1,  =(PIOE_BASE_ADDR)
	str	r0, [r1, #PIO_CODR]
	.endm

	.macro  led_d8_off
	mov	r1, #0x01
	mov 	r0, r1, lsl #28
	ldr	r1,  =(PIOE_BASE_ADDR)
	str	r0, [r1, #PIO_SODR]
	.endm

	.macro  led_d9_on
	mov	r1, #0x01
	mov 	r0, r1, lsl #9
	ldr	r1,  =(PIOE_BASE_ADDR)
	str	r0, [r1, #PIO_SODR]
	.endm

	.macro  led_d9_off
	mov	r1, #0x01
	mov 	r0, r1, lsl #9
	ldr	r1,  =(PIOE_BASE_ADDR)
	str	r0, [r1, #PIO_CODR]
	.endm

monitor_smc_handler:
	/* Save some workable registers */
	stmdb	sp!, {r0-r3}

	/*
	 * Depending on from which world the SMC is called from the code
	 * switches to appropriate world by properly setting the SCR
	 *  register.
	 */
	mrc	p15, 0, r0, c1, c1, 0	/* read SCR */
	eor	r0, r0, #NS_BIT		/* Extract current SCR->NS bit */
	mcr	p15, 0, r0, c1, c1, 0

	/* Restore NWd non-corruptible registers */
	ldr	r0, =NWD_DATA_BASE

	/* Restore NWd cpsr in monitor spsr such that it returns to NWd
	 * by restoring spsr to NWd
	 */
	ldr	r1, [r0, #NWD_CPSR_OFF]

	/*
	 * Note: The monitor spsr is cloberred here which is SWd cpsr. This is
	 * not of a issue as of now since interrupts are not enabled in the
	 * SWd during entire operation. In future if interrupts are supported
	 * in the SWd then the SWd's cpsr (which is in mon_spsr has to be saved
	 * and restored properly.
	 */
	msr	spsr_cxsf, r1

	/* Restore NWd r8-r11 registers */
//	LDR	r8, [r0, #NWD_R8_OFF]
//	LDR	r9, [r0, #NWD_R9_OFF]
//	LDR	r10, [r0, #NWD_R10_OFF]
//	LDR	r11, [r0, #NWD_R11_OFF]

	/* The following pop is not necessary here since these registers are
	 * not used further. However to adjust the stack pointer as used
	 * earlier for the scratch registers the pop is being used here.
	 */
	//ldmia		sp!, {r0-r3}

	/*
	 * Zero out r1-r7 and r12 registers to ensure that no information is
	 * leaked out from the SWd
	 * r8-r11 are non-corruptible registers. Therefore, r8-r11 registers
	 * values are not touched here. They are restored to the NWd's actual
	 * values above using RESTORE_NWD_SAVED_REGS
	 */
//	MOV	r1, #0
//	MOV	r2, #0
//	MOV	r3, #0
//	MOV	r4, #0
//	MOV	r5, #0
//	MOV	r6, #0
//	MOV	r7, #0
//	MOV	r12, #0

	/* restore mon_lr to NWd return point */
	led_d8_on
	led_d9_on

	ldr	lr, [r0, #NWD_PC_OFF]
	movs	pc, lr

	.end
