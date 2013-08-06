/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012, Atmel Corporation

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
/*
;------------------------------------------------------------------------------
; TZST MONITOR Area is used by the monitor to save and restore
; several critical registers.
; As mentioned in the SMC protocol r0-r7, r12 registers are corruptbile
; registers and r8-r11 and lr, sp and cpsr needs to be properly saved and
; restored.
; NWd Call to SWd function
;      Save    -> r8-r11, svc_lr and svc_sp, cpsr
;      Restore -> svc_lr, svc_sp, and cpsr(SVC mode with interrupt disabled).
; SWd return after completing service function execution:
;      Save    -> svc_lr, svc_sp, and cpsr(SVC mode with interrupt disabled).
;      Restore -> r8-r11, svc_lr and svc_sp, cpsr
;------------------------------------------------------------------------------
*/
#ifndef __MON_MACROS_H__
#define __MON_MACROS_H__

/* NWd non-corrputible registers fields offsets from the Monitor data area */
#define NWD_PC_OFF	4
#define NWD_CPSR_OFF	8

#if 0
#define NWD_R8_OFF	12
#define NWD_R9_OFF	16
#define NWD_R10_OFF	20
#define NWD_R11_OFF	24
#define NWD_R12_OFF	30

/* SWd critical registers fields offsets from the Monitor data area to execute
   sevice functions in SVC mode which uses SWd SVC stack. */
#define SWD_PC_OFF	4
#define SWD_CPSR_OFF	8
#define SWD_SVC_SP_OFF	12
#endif

/*
 * Secure Configuration Register
 */
#define NS_BIT		0x01

/*
 *----------------------------------------------------------------------------
 * Standard definitions of ARM processor mode bits
 *----------------------------------------------------------------------------
 */
#define Mode_FIQ	0x11
#define Mode_IRQ	0x12
#define Mode_SVC	0x13
#define Mode_MON	0x16
#define Mode_ABT	0x17
#define Mode_UND	0x1B
#define Mode_SYS	0x1F

/* ----------------------------------------------------------------------------
 * Standard definitions of interrupt (I & F) flags in PSRs
 *-----------------------------------------------------------------------------
 */
#define CPSR_I_BIT	0x80	/* when I bit is set, IRQ is disabled */
#define CPSR_F_BIT	0x40	/* when F bit is set, FIQ is disabled */

/*
 *-----------------------------------------------------------------------------
 * Standard definitions of SCR IRQ and FIQ bits(Secure Configuration Register)
 *-----------------------------------------------------------------------------
 */
#define SCR_FIQ_BIT	0x04	/* SCR[1](FIQ) bit on an FIQ exception */
#define SCR_IRQ_BIT	0x02	/* SCR[2](IRQ) bit on an IRQ exception */
#define SCR_FW_BIT	0x10	/* SCR[4](FW) bit */
#define SCR_AW_BIT	0x20	/* SCR[5](AW) bit */

/*
 *--------------------------------------------------------------------------
 * Standard definitions of Non-Secure Access Control register configuration
 *--------------------------------------------------------------------------
 */
#define NSACR_BIT_CP	0x03FFF		/* Bit 0-13 */
#define NSACR_BIT_CL	0x10000		/* Bit 16 */
#define NSACR_BIT_TL	0x20000		/* Bit 17 */
#define NSACR_BIT_DMA	0x40000		/* Bit 18 */

/*
 *---------------------------------------------------------------------------
 * Standard definitions Secure Debug Enable Register value
 *---------------------------------------------------------------------------
 */
#define DEBUG_ENABLE_BIT	0x03

/*
 *----------------------------------------------------------------------------
 * M[4:0] = SVC
 * T[5]   = ARM state
 * I[6]  = FIQ Disabled
 * F[7]  = IRQ Disabled
 * E[9]  = Imprecise Aborts Enabled
 * A[8]  = Data Endianess Disabled
 * J[24] = Jazelle state Disabled
 * All status flags NZCVQ to reset value
 *----------------------------------------------------------------------------
 */
#define INITIAL_NWD_CPSR	0x1D3

/*
 *----------------------------------------------------------------------------
 * M[4:0] = SVC
 * T[5]   = ARM state
 * I [6]  = FIQ Disabled
 * F [7]  = IRQ Disabled
 * E [9]  = Imprecise Aborts Enabled
 * A [8]  = Data Endianess Disabled
 * J [24] = Jazelle state Disabled
 * All status flags NZCVQ to reset value
 *----------------------------------------------------------------------------
 */
#define INITIAL_SWD_CPSR	0x1D3

#define MON_STACK_BASE		(TOP_OF_MEMORY - 0x400)
#define NWD_DATA_BASE		(MON_STACK_BASE - 0x100)

#define NWD_BOOT_ADDR		JUMP_ADDR

#endif /* #ifndef __MON_MACROS_H__ */
