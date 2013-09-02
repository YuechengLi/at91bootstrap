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
	ands	r1, r0, #NS_BIT
	/*
	 * If NS bit is set then it is a call from NWd
	 * Otherwise it is a return from SWd
	 */
	BEQ	swd_to_nwd

nwd_to_swd:
	bic	r0, r0, #NS_BIT
	MCR	p15, 0, r0, c1, c1, 0
	/* ~~~ We are in SWd from now on ~~~ */

	/* - Implement the NWd --> SWd sequence as described in mon_macro.h */
	/*   - Save NWd registers */
	ldr	r0, =MON_DATA_BASE
	/*     - monitor lr is NWd pc */
	str	lr,  [r0, #NWD_PC_OFF]
	/*     - monitor spsr is NWd cpsr */
	mrs	r1, spsr
	str	r1,  [r0, #NWD_CPSR_OFF]
	/*     - r8-r11 */
	str	r8,  [r0, #NWD_R8_OFF]
	str	r9,  [r0, #NWD_R9_OFF]
	str	r10, [r0, #NWD_R10_OFF]
	str	r11, [r0, #NWD_R11_OFF]
	/*     - sp & lr */
	cps	#Mode_SVC
	str	sp, [r0, #NWD_SVC_SP_OFF]
	str	lr, [r0, #NWD_SVC_LR_OFF]
	/*   - Restore SWd registers */
	/*     - sp */
	ldr	sp, [r0, #SWD_SVC_SP_OFF]
	cps	#Mode_MON

	/*     - lr */
	ldr	lr, [r0, #SWD_PC_OFF]

	/* Restore corrupted registers */
	ldmia	sp!, {r0-r3}

	/* Call service manager (svc_mgr_*) that further executes service function */
	/* (take cpsr from database as well) */
	rfe	lr

swd_to_nwd:
	/* TODO */

	.end
