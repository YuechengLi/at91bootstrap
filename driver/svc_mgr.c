#include "svc_mgr.h"
#include "debug.h"

/*
 * SvcMgr_Main - C entry point of the secure world when a SMC is processed in Normal World
 */
int SvcMgr_Main(sSMCArgs_t const * pksArgs)
{
	dbg_log(1, "--> SvcMgr_Main\n\r");

#if 0
	switch (pksArgs->uiSMCID) {
	case 0x42:
		l2cache_init();
		break;
	default:
		printf("SvcMgr error: uiSMCID (%d) not defined\n",
						pksArgs->uiSMCID);
		break;
	}
#endif
	dbg_log(1, "SvcMgr error: uiSMCID (%d) not defined\n\r",
						pksArgs->uiSMCID);

	dbg_log(1, "<-- SvcMgr_Main\n\r");

	return 0;
}
