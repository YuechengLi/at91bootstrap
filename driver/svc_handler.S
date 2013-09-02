
.section monitor
	.text
	.align

	.extern SvcMgr_Main
	.global SvcMgr_MainVeneer

SvcMgr_MainVeneer:
	/* Push registers onto the stack to create an
	 * sSMCArgs_t structure.
	 */
	PUSH    {r0-r7}
	MOV     r0, sp  /* r0 should point to the argument structure. */

	/* Call the C code SMC handler. */
	BL      SvcMgr_Main

	/* Restore the stack pointer to reset value. */
	ADD     sp, sp, #(8*4)

	/* Return to Normal World. */
	SMC     #0

	bx	lr

	.end
