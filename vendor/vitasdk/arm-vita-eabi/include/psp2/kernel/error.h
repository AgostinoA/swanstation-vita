/**
 * \usergroup{SceKernelError}
 * \usage{psp2/kernel/error.h}
 */


#ifndef _PSP2_KERNEL_ERROR_H_
#define _PSP2_KERNEL_ERROR_H_

typedef enum SceKernelErrorCode {
	SCE_KERNEL_OK                                                = 0x0,
	SCE_KERNEL_ERROR_ERROR                                       = 0x80020001,
	SCE_KERNEL_ERROR_NOT_IMPLEMENTED                             = 0x80020002,
	SCE_KERNEL_ERROR_NOSYS                                       = 0x80020003,
	SCE_KERNEL_ERROR_UNSUP                                       = 0x80020004,
	SCE_KERNEL_ERROR_INVALID_ARGUMENT                            = 0x80020005,
	SCE_KERNEL_ERROR_ILLEGAL_ADDR                                = 0x80020006,
	SCE_KERNEL_ERROR_ILLEGAL_ALIGNMENT                           = 0x80020007,
	SCE_KERNEL_ERROR_ILLEGAL_PERMISSION                          = 0x80020008,
	SCE_KERNEL_ERROR_INVALID_ARGUMENT_SIZE                       = 0x80020009,
	SCE_KERNEL_ERROR_INVALID_FLAGS                               = 0x8002000A,
	SCE_KERNEL_ERROR_ILLEGAL_SIZE                                = 0x8002000B,
	SCE_KERNEL_ERROR_ILLEGAL_TYPE                                = 0x8002000C,
	SCE_KERNEL_ERROR_ILLEGAL_PATTERN                             = 0x8002000D,
	SCE_KERNEL_ERROR_ILLEGAL_ATTR                                = 0x8002000E,
	SCE_KERNEL_ERROR_ILLEGAL_COUNT                               = 0x8002000F,
	SCE_KERNEL_ERROR_ILLEGAL_MODE                                = 0x80020010,
	SCE_KERNEL_ERROR_ILLEGAL_OPEN_LIMIT                          = 0x80020011,
	SCE_KERNEL_ERROR_ONLY_DEVELOPMENT_MODE                       = 0x80020012,
	SCE_KERNEL_ERROR_DEBUG_ERROR                                 = 0x80021000,
	SCE_KERNEL_ERROR_ILLEGAL_DIPSW_NUMBER                        = 0x80021001,
	SCE_KERNEL_ERROR_PA_ERROR                                    = 0x80021100,
	SCE_KERNEL_ERROR_PA_NOT_AVAILABLE                            = 0x80021101,
	SCE_KERNEL_ERROR_PA_INVALID_KEY                              = 0x80021102,
	SCE_KERNEL_ERROR_PA_KEY_IS_NOT_SHARED                        = 0x80021103,
	SCE_KERNEL_ERROR_PA_INVALID_SIGNATURE                        = 0x80021104,
	SCE_KERNEL_ERROR_CPU_ERROR                                   = 0x80022000,
	SCE_KERNEL_ERROR_MMU_ILLEGAL_L1_TYPE                         = 0x80022001,
	SCE_KERNEL_ERROR_MMU_L2_INDEX_OVERFLOW                       = 0x80022002,
	SCE_KERNEL_ERROR_MMU_L2_SIZE_OVERFLOW                        = 0x80022003,
	SCE_KERNEL_ERROR_INVALID_CPU_AFFINITY                        = 0x80022004,
	SCE_KERNEL_ERROR_INVALID_MEMORY_ACCESS                       = 0x80022005,
	SCE_KERNEL_ERROR_INVALID_MEMORY_ACCESS_PERMISSION            = 0x80022006,
	SCE_KERNEL_ERROR_VA2PA_FAULT                                 = 0x80022007,
	SCE_KERNEL_ERROR_VA2PA_MAPPED                                = 0x80022008,
	SCE_KERNEL_ERROR_VALIDATION_CHECK_FAILED                     = 0x80022009,
	SCE_KERNEL_ERROR_SYSMEM_ERROR                                = 0x80024000,
	SCE_KERNEL_ERROR_INVALID_PROCESS_CONTEXT                     = 0x80024001,
	SCE_KERNEL_ERROR_UID_NAME_TOO_LONG                           = 0x80024002,
	SCE_KERNEL_ERROR_VARANGE_IS_NOT_PHYSICAL_CONTINUOUS          = 0x80024003,
	SCE_KERNEL_ERROR_PHYADDR_ERROR                               = 0x80024100,
	SCE_KERNEL_ERROR_NO_PHYADDR                                  = 0x80024101,
	SCE_KERNEL_ERROR_PHYADDR_USED                                = 0x80024102,
	SCE_KERNEL_ERROR_PHYADDR_NOT_USED                            = 0x80024103,
	SCE_KERNEL_ERROR_NO_IOADDR                                   = 0x80024104,
	SCE_KERNEL_ERROR_PHYMEM_ERROR                                = 0x80024300,
	SCE_KERNEL_ERROR_ILLEGAL_PHYPAGE_STATUS                      = 0x80024301,
	SCE_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE                       = 0x80024302,
	SCE_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE_UNIT                  = 0x80024303,
	SCE_KERNEL_ERROR_PHYMEMPART_NOT_EMPTY                        = 0x80024304,
	SCE_KERNEL_ERROR_NO_PHYMEMPART_LPDDR2                        = 0x80024305,
	SCE_KERNEL_ERROR_NO_PHYMEMPART_CDRAM                         = 0x80024306,
	SCE_KERNEL_ERROR_PHYMEMPART_OUT_OF_INDEX                     = 0x80024307,
	SCE_KERNEL_ERROR_CANNOT_GROW_PHYMEMPART                      = 0x80024308,
	SCE_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE_CDRAM                 = 0x80024309,
	SCE_KERNEL_ERROR_INVALID_SUBBUDGET_ID                        = 0x8002430A,
	SCE_KERNEL_ERROR_FIXEDHEAP_ERROR                             = 0x80024400,
	SCE_KERNEL_ERROR_FIXEDHEAP_ILLEGAL_SIZE                      = 0x80024401,
	SCE_KERNEL_ERROR_FIXEDHEAP_ILLEGAL_INDEX                     = 0x80024402,
	SCE_KERNEL_ERROR_FIXEDHEAP_INDEX_OVERFLOW                    = 0x80024403,
	SCE_KERNEL_ERROR_FIXEDHEAP_NO_CHUNK                          = 0x80024404,
	SCE_KERNEL_ERROR_UID_ERROR                                   = 0x80024500,
	SCE_KERNEL_ERROR_INVALID_UID                                 = 0x80024501,
	SCE_KERNEL_ERROR_SYSMEM_UID_INVALID_ARGUMENT                 = 0x80024502,
	SCE_KERNEL_ERROR_SYSMEM_INVALID_UID_RANGE                    = 0x80024503,
	SCE_KERNEL_ERROR_SYSMEM_NO_VALID_UID                         = 0x80024504,
	SCE_KERNEL_ERROR_SYSMEM_CANNOT_ALLOCATE_UIDENTRY             = 0x80024505,
	SCE_KERNEL_ERROR_NOT_PROCESS_UID                             = 0x80024506,
	SCE_KERNEL_ERROR_NOT_KERNEL_UID                              = 0x80024507,
	SCE_KERNEL_ERROR_INVALID_UID_CLASS                           = 0x80024508,
	SCE_KERNEL_ERROR_INVALID_UID_SUBCLASS                        = 0x80024509,
	SCE_KERNEL_ERROR_UID_CANNOT_FIND_BY_NAME                     = 0x8002450A,
	SCE_KERNEL_ERROR_UID_NOT_VISIBLE                             = 0x8002450B,
	SCE_KERNEL_ERROR_UID_MAX_OPEN                                = 0x8002450C,
	SCE_KERNEL_ERROR_UID_RL_OVERFLOW                             = 0x8002450D,
	SCE_KERNEL_ERROR_VIRPAGE_ERROR                               = 0x80024600,
	SCE_KERNEL_ERROR_ILLEGAL_VIRPAGE_TYPE                        = 0x80024601,
	SCE_KERNEL_ERROR_BLOCK_ERROR                                 = 0x80024700,
	SCE_KERNEL_ERROR_ILLEGAL_BLOCK_ID                            = 0x80024701,
	SCE_KERNEL_ERROR_ILLEGAL_BLOCK_TYPE                          = 0x80024702,
	SCE_KERNEL_ERROR_BLOCK_IN_USE                                = 0x80024703,
	SCE_KERNEL_ERROR_PARTITION_ERROR                             = 0x80024800,
	SCE_KERNEL_ERROR_ILLEGAL_PARTITION_ID                        = 0x80024801,
	SCE_KERNEL_ERROR_ILLEGAL_PARTITION_INDEX                     = 0x80024802,
	SCE_KERNEL_ERROR_NO_L2PAGETABLE                              = 0x80024803,
	SCE_KERNEL_ERROR_HEAPLIB_ERROR                               = 0x80024900,
	SCE_KERNEL_ERROR_ILLEGAL_HEAP_ID                             = 0x80024901,
	SCE_KERNEL_ERROR_OUT_OF_RANG                                 = 0x80024902,
	SCE_KERNEL_ERROR_HEAPLIB_NOMEM                               = 0x80024903,
	SCE_KERNEL_ERROR_HEAPLIB_VERIFY_ERROR                        = 0x80024904,
	SCE_KERNEL_ERROR_SYSMEM_ADDRESS_SPACE_ERROR                  = 0x80024A00,
	SCE_KERNEL_ERROR_INVALID_ADDRESS_SPACE_ID                    = 0x80024A01,
	SCE_KERNEL_ERROR_INVALID_PARTITION_INDEX                     = 0x80024A02,
	SCE_KERNEL_ERROR_ADDRESS_SPACE_CANNOT_FIND_PARTITION_BY_ADDR = 0x80024A03,
	SCE_KERNEL_ERROR_SYSMEM_MEMBLOCK_ERROR                       = 0x80024B00,
	SCE_KERNEL_ERROR_ILLEGAL_MEMBLOCK_TYPE                       = 0x80024B01,
	SCE_KERNEL_ERROR_ILLEGAL_MEMBLOCK_REMAP_TYPE                 = 0x80024B02,
	SCE_KERNEL_ERROR_NOT_PHY_CONT_MEMBLOCK                       = 0x80024B03,
	SCE_KERNEL_ERROR_ILLEGAL_MEMBLOCK_CODE                       = 0x80024B04,
	SCE_KERNEL_ERROR_ILLEGAL_MEMBLOCK_SIZE                       = 0x80024B05,
	SCE_KERNEL_ERROR_ILLEGAL_USERMAP_SIZE                        = 0x80024B06,
	SCE_KERNEL_ERROR_MEMBLOCK_TYPE_FOR_KERNEL_PROCESS            = 0x80024B07,
	SCE_KERNEL_ERROR_PROCESS_CANNOT_REMAP_MEMBLOCK               = 0x80024B08,
	SCE_KERNEL_ERROR_MEMBLOCK_RANGE_ERROR                        = 0x80024B09,
	SCE_KERNEL_ERROR_MEMBLOCK_TYPE_FOR_UPDATER_OR_SAFEMODE       = 0x80024B0A,
	SCE_KERNEL_ERROR_MEMBLOCK_OVERFLOW                           = 0x80024B0B,
	SCE_KERNEL_ERROR_SYSMEM_PHYMEMLOW_ERROR                      = 0x80024C00,
	SCE_KERNEL_ERROR_CANNOT_ALLOC_PHYMEMLOW                      = 0x80024C01,
	SCE_KERNEL_ERROR_UNKNOWN_PHYMEMLOW_TYPE                      = 0x80024C02,
	SCE_KERNEL_ERROR_SYSMEM_BITHEAP_ERROR                        = 0x80024D00,
	SCE_KERNEL_ERROR_CANNOT_ALLOC_BITHEAP                        = 0x80024D01,
	SCE_KERNEL_ERROR_SYSMEM_NAMEHEAP_ERROR                       = 0x80024E00,
	SCE_KERNEL_ERROR_NO_SUCH_NAME                                = 0x80024E01,
	SCE_KERNEL_ERROR_DUPLICATE_NAME                              = 0x80024E02,
	SCE_KERNEL_ERROR_LOADCORE_ERROR                              = 0x80025000,
	SCE_KERNEL_ERROR_ILLEGAL_ELF_HEADER                          = 0x80025001,
	SCE_KERNEL_ERROR_ILLEGAL_SELF_HEADER                         = 0x80025002,
	SCE_KERNEL_ERROR_EXCPMGR_ERROR                               = 0x80027000,
	SCE_KERNEL_ERROR_ILLEGAL_EXCPCODE                            = 0x80027001,
	SCE_KERNEL_ERROR_ILLEGAL_EXCPHANDLER                         = 0x80027002,
	SCE_KERNEL_ERROR_NOTFOUND_EXCPHANDLER                        = 0x80027003,
	SCE_KERNEL_ERROR_CANNOT_RELEASE_EXCPHANDLER                  = 0x80027004,
	SCE_KERNEL_ERROR_INTRMGR_ERROR                               = 0x80027100,
	SCE_KERNEL_ERROR_ILLEGAL_CONTEXT                             = 0x80027101,
	SCE_KERNEL_ERROR_ILLEGAL_INTRCODE                            = 0x80027102,
	SCE_KERNEL_ERROR_ILLEGAL_INTRPARAM                           = 0x80027103,
	SCE_KERNEL_ERROR_ILLEGAL_INTRPRIORITY                        = 0x80027104,
	SCE_KERNEL_ERROR_ILLEGAL_TARGET_CPU                          = 0x80027105,
	SCE_KERNEL_ERROR_ILLEGAL_INTRFILTER                          = 0x80027106,
	SCE_KERNEL_ERROR_ILLEGAL_INTRTYPE                            = 0x80027107,
	SCE_KERNEL_ERROR_ILLEGAL_HANDLER                             = 0x80027108,
	SCE_KERNEL_ERROR_FOUND_HANDLER                               = 0x80027109,
	SCE_KERNEL_ERROR_NOTFOUND_HANDLER                            = 0x8002710A,
	SCE_KERNEL_ERROR_NO_MEMORY                                   = 0x8002710B,
	SCE_KERNEL_ERROR_DMACMGR_ERROR                               = 0x80027200,
	SCE_KERNEL_ERROR_ALREADY_QUEUED                              = 0x80027201,
	SCE_KERNEL_ERROR_NOT_QUEUED                                  = 0x80027202,
	SCE_KERNEL_ERROR_NOT_SETUP                                   = 0x80027203,
	SCE_KERNEL_ERROR_ON_TRANSFERRING                             = 0x80027204,
	SCE_KERNEL_ERROR_NOT_INITIALIZED                             = 0x80027205,
	SCE_KERNEL_ERROR_TRANSFERRED                                 = 0x80027206,
	SCE_KERNEL_ERROR_NOT_UNDER_CONTROL                           = 0x80027207,
	SCE_KERNEL_ERROR_CANCELING                                   = 0x80027208,
	SCE_KERNEL_ERROR_SYSTIMER_ERROR                              = 0x80027300,
	SCE_KERNEL_ERROR_NO_FREE_TIMER                               = 0x80027301,
	SCE_KERNEL_ERROR_TIMER_NOT_ALLOCATED                         = 0x80027302,
	SCE_KERNEL_ERROR_TIMER_COUNTING                              = 0x80027303,
	SCE_KERNEL_ERROR_TIMER_STOPPED                               = 0x80027304,
	SCE_KERNEL_ERROR_THREADMGR_ERROR                             = 0x80028000,
	SCE_KERNEL_ERROR_UNKNOWN_UID                                 = 0x80028001,
	SCE_KERNEL_ERROR_DIFFERENT_UID_CLASS                         = 0x80028002,
	SCE_KERNEL_ERROR_ALREADY_REGISTERED                          = 0x80028003,
	SCE_KERNEL_ERROR_CAN_NOT_WAIT                                = 0x80028004,
	SCE_KERNEL_ERROR_WAIT_TIMEOUT                                = 0x80028005,
	SCE_KERNEL_ERROR_WAIT_DELETE                                 = 0x80028006,
	SCE_KERNEL_ERROR_WAIT_CANCEL                                 = 0x80028007,
	SCE_KERNEL_ERROR_THREAD_ERROR                                = 0x80028020,
	SCE_KERNEL_ERROR_UNKNOWN_THREAD_ID                           = 0x80028021,
	SCE_KERNEL_ERROR_ILLEGAL_THREAD_ID                           = 0x80028022,
	SCE_KERNEL_ERROR_ILLEGAL_PRIORITY                            = 0x80028023,
	SCE_KERNEL_ERROR_ILLEGAL_STACK_SIZE                          = 0x80028024,
	SCE_KERNEL_ERROR_ILLEGAL_CPU_AFFINITY_MASK                   = 0x80028025,
	SCE_KERNEL_ERROR_ILLEGAL_THREAD_PARAM_COMBINATION            = 0x80028026,
	SCE_KERNEL_ERROR_DORMANT                                     = 0x80028027,
	SCE_KERNEL_ERROR_NOT_DORMANT                                 = 0x80028028,
	SCE_KERNEL_ERROR_RUNNING                                     = 0x80028029,
	SCE_KERNEL_ERROR_DELETED                                     = 0x8002802A,
	SCE_KERNEL_ERROR_CAN_NOT_SUSPEND                             = 0x8002802B,
	SCE_KERNEL_ERROR_THREAD_STOPPED                              = 0x8002802C,
	SCE_KERNEL_ERROR_THREAD_SUSPENDED                            = 0x8002802D,
	SCE_KERNEL_ERROR_NOT_SUSPENDED                               = 0x8002802E,
	SCE_KERNEL_ERROR_ALREADY_DEBUG_SUSPENDED                     = 0x8002802F,
	SCE_KERNEL_ERROR_NOT_DEBUG_SUSPENDED                         = 0x80028030,
	SCE_KERNEL_ERROR_CAN_NOT_USE_VFP                             = 0x80028031,
	SCE_KERNEL_ERROR_THREAD_EVENT_ERROR                          = 0x80028060,
	SCE_KERNEL_ERROR_UNKNOWN_THREAD_EVENT_ID                     = 0x80028061,
	SCE_KERNEL_ERROR_KERNEL_TLS_ERROR                            = 0x80028080,
	SCE_KERNEL_ERROR_KERNEL_TLS_FULL                             = 0x80028081,
	SCE_KERNEL_ERROR_ILLEGAL_KERNEL_TLS_INDEX                    = 0x80028082,
	SCE_KERNEL_ERROR_KERNEL_TLS_BUSY                             = 0x80028083,
	SCE_KERNEL_ERROR_CALLBACK_ERROR                              = 0x800280A0,
	SCE_KERNEL_ERROR_UNKNOWN_CALLBACK_ID                         = 0x800280A1,
	SCE_KERNEL_ERROR_NOTIFY_CALLBACK                             = 0x800280A2,
	SCE_KERNEL_ERROR_CALLBACK_NOT_REGISTERED                     = 0x800280A3,
	SCE_KERNEL_ERROR_ALARM_ERROR                                 = 0x800280C0,
	SCE_KERNEL_ERROR_UNKNOWN_ALARM_ID                            = 0x800280C1,
	SCE_KERNEL_ERROR_ALARM_CAN_NOT_CANCEL                        = 0x800280C2,
	SCE_KERNEL_ERROR_EVF_ERROR                                   = 0x800280E0,
	SCE_KERNEL_ERROR_UNKNOWN_EVF_ID                              = 0x800280E1,
	SCE_KERNEL_ERROR_EVF_MULTI                                   = 0x800280E2,
	SCE_KERNEL_ERROR_EVF_COND                                    = 0x800280E3,
	SCE_KERNEL_ERROR_SEMA_ERROR                                  = 0x80028100,
	SCE_KERNEL_ERROR_UNKNOWN_SEMA_ID                             = 0x80028101,
	SCE_KERNEL_ERROR_SEMA_ZERO                                   = 0x80028102,
	SCE_KERNEL_ERROR_SEMA_OVF                                    = 0x80028103,
	SCE_KERNEL_ERROR_SIGNAL_ERROR                                = 0x80028120,
	SCE_KERNEL_ERROR_ALREADY_SENT                                = 0x80028121,
	SCE_KERNEL_ERROR_MUTEX_ERROR                                 = 0x80028140,
	SCE_KERNEL_ERROR_UNKNOWN_MUTEX_ID                            = 0x80028141,
	SCE_KERNEL_ERROR_MUTEX_RECURSIVE                             = 0x80028142,
	SCE_KERNEL_ERROR_MUTEX_LOCK_OVF                              = 0x80028143,
	SCE_KERNEL_ERROR_MUTEX_UNLOCK_UDF                            = 0x80028144,
	SCE_KERNEL_ERROR_MUTEX_FAILED_TO_OWN                         = 0x80028145,
	SCE_KERNEL_ERROR_MUTEX_NOT_OWNED                             = 0x80028146,
	SCE_KERNEL_ERROR_FAST_MUTEX_ERROR                            = 0x80028160,
	SCE_KERNEL_ERROR_UNKNOWN_FAST_MUTEX_ID                       = 0x80028161,
	SCE_KERNEL_ERROR_FAST_MUTEX_RECURSIVE                        = 0x80028162,
	SCE_KERNEL_ERROR_FAST_MUTEX_LOCK_OVF                         = 0x80028163,
	SCE_KERNEL_ERROR_FAST_MUTEX_FAILED_TO_OWN                    = 0x80028164,
	SCE_KERNEL_ERROR_FAST_MUTEX_NOT_OWNED                        = 0x80028165,
	SCE_KERNEL_ERROR_FAST_MUTEX_OWNED                            = 0x80028166,
	SCE_KERNEL_ERROR_FAST_MUTEX_ALREADY_INITIALIZED              = 0x80028167,
	SCE_KERNEL_ERROR_FAST_MUTEX_NOT_INITIALIZED                  = 0x80028168,
	SCE_KERNEL_ERROR_LW_MUTEX_ERROR                              = 0x80028180,
	SCE_KERNEL_ERROR_UNKNOWN_LW_MUTEX_ID                         = 0x80028181,
	SCE_KERNEL_ERROR_LW_MUTEX_RECURSIVE                          = 0x80028182,
	SCE_KERNEL_ERROR_LW_MUTEX_LOCK_OVF                           = 0x80028183,
	SCE_KERNEL_ERROR_LW_MUTEX_UNLOCK_UDF                         = 0x80028184,
	SCE_KERNEL_ERROR_LW_MUTEX_FAILED_TO_OWN                      = 0x80028185,
	SCE_KERNEL_ERROR_LW_MUTEX_NOT_OWNED                          = 0x80028186,
	SCE_KERNEL_ERROR_COND_ERROR                                  = 0x800281A0,
	SCE_KERNEL_ERROR_UNKNOWN_COND_ID                             = 0x800281A1,
	SCE_KERNEL_ERROR_WAIT_DELETE_MUTEX                           = 0x800281A2,
	SCE_KERNEL_ERROR_WAIT_CANCEL_MUTEX                           = 0x800281A3,
	SCE_KERNEL_ERROR_WAIT_DELETE_COND                            = 0x800281A4,
	SCE_KERNEL_ERROR_WAIT_CANCEL_COND                            = 0x800281A5,
	SCE_KERNEL_ERROR_LW_COND_ERROR                               = 0x800281C0,
	SCE_KERNEL_ERROR_UNKNOWN_LW_COND_ID                          = 0x800281C1,
	SCE_KERNEL_ERROR_WAIT_DELETE_LW_MUTEX                        = 0x800281C2,
	SCE_KERNEL_ERROR_WAIT_DELETE_LW_COND                         = 0x800281C3,
	SCE_KERNEL_ERROR_RW_LOCK_ERROR                               = 0x800281E0,
	SCE_KERNEL_ERROR_UNKNOWN_RW_LOCK_ID                          = 0x800281E1,
	SCE_KERNEL_ERROR_RW_LOCK_RECURSIVE                           = 0x800281E2,
	SCE_KERNEL_ERROR_RW_LOCK_LOCK_OVF                            = 0x800281E3,
	SCE_KERNEL_ERROR_RW_LOCK_NOT_OWNED                           = 0x800281E4,
	SCE_KERNEL_ERROR_RW_LOCK_UNLOCK_UDF                          = 0x800281E5,
	SCE_KERNEL_ERROR_RW_LOCK_FAILED_TO_LOCK                      = 0x800281E6,
	SCE_KERNEL_ERROR_RW_LOCK_FAILED_TO_UNLOCK                    = 0x800281E7,
	SCE_KERNEL_ERROR_EVENT_ERROR                                 = 0x80028200,
	SCE_KERNEL_ERROR_UNKNOWN_EVENT_ID                            = 0x80028201,
	SCE_KERNEL_ERROR_EVENT_COND                                  = 0x80028202,
	SCE_KERNEL_ERROR_MSG_PIPE_ERROR                              = 0x80028220,
	SCE_KERNEL_ERROR_UNKNOWN_MSG_PIPE_ID                         = 0x80028221,
	SCE_KERNEL_ERROR_MSG_PIPE_FULL                               = 0x80028222,
	SCE_KERNEL_ERROR_MSG_PIPE_EMPTY                              = 0x80028223,
	SCE_KERNEL_ERROR_MSG_PIPE_DELETED                            = 0x80028224,
	SCE_KERNEL_ERROR_TIMER_ERROR                                 = 0x80028240,
	SCE_KERNEL_ERROR_UNKNOWN_TIMER_ID                            = 0x80028241,
	SCE_KERNEL_ERROR_EVENT_NOT_SET                               = 0x80028242,
	SCE_KERNEL_ERROR_SIMPLE_EVENT_ERROR                          = 0x80028260,
	SCE_KERNEL_ERROR_UNKNOWN_SIMPLE_EVENT_ID                     = 0x80028261,
	SCE_KERNEL_ERROR_PMON_ERROR                                  = 0x80028280,
	SCE_KERNEL_ERROR_PMON_NOT_THREAD_MODE                        = 0x80028281,
	SCE_KERNEL_ERROR_PMON_NOT_CPU_MODE                           = 0x80028282,
	SCE_KERNEL_ERROR_WORK_QUEUE                                  = 0x80028300,
	SCE_KERNEL_ERROR_UNKNOWN_WORK_QUEUE_ID                       = 0x80028301,
	SCE_KERNEL_ERROR_UNKNOWN_WORK_TASK_ID                        = 0x80028302,
	SCE_KERNEL_ERROR_PROCESSMGR_ERROR                            = 0x80029000,
	SCE_KERNEL_ERROR_INVALID_PID                                 = 0x80029001,
	SCE_KERNEL_ERROR_INVALID_PROCESS_TYPE                        = 0x80029002,
	SCE_KERNEL_ERROR_PLS_FULL                                    = 0x80029003,
	SCE_KERNEL_ERROR_INVALID_PROCESS_STATUS                      = 0x80029004,
	SCE_KERNEL_ERROR_PROCESS_CALLBACK_NOTFOUND                   = 0x80029005,
	SCE_KERNEL_ERROR_INVALID_BUDGET_ID                           = 0x80029006,
	SCE_KERNEL_ERROR_INVALID_BUDGET_SIZE                         = 0x80029007,
	SCE_KERNEL_ERROR_CP14_DISABLED                               = 0x80029008,
	SCE_KERNEL_ERROR_EXCEEDED_MAX_PROCESSES                      = 0x80029009,
	SCE_KERNEL_ERROR_PROCESS_REMAINING                           = 0x8002900A,
	SCE_KERNEL_ERROR_NO_PROCESS_DATA                             = 0x8002900B,
	SCE_KERNEL_ERROR_PROCESS_EVENT_INHIBITED                     = 0x8002900C,
	SCE_KERNEL_ERROR_IOFILEMGR_ERROR                             = 0x8002A000,
	SCE_KERNEL_ERROR_IO_NAME_TOO_LONG                            = 0x8002A001,
	SCE_KERNEL_ERROR_IO_REG_DEV                                  = 0x8002A002,
	SCE_KERNEL_ERROR_IO_ALIAS_USED                               = 0x8002A003,
	SCE_KERNEL_ERROR_IO_DEL_DEV                                  = 0x8002A004,
	SCE_KERNEL_ERROR_IO_WOULD_BLOCK                              = 0x8002A005,
	SCE_KERNEL_ERROR_MODULEMGR_START_FAILED                      = 0x8002D000,
	SCE_KERNEL_ERROR_MODULEMGR_STOP_FAIL                         = 0x8002D001,
	SCE_KERNEL_ERROR_MODULEMGR_IN_USE                            = 0x8002D002,
	SCE_KERNEL_ERROR_MODULEMGR_NO_LIB                            = 0x8002D003,
	SCE_KERNEL_ERROR_MODULEMGR_SYSCALL_REG                       = 0x8002D004,
	SCE_KERNEL_ERROR_MODULEMGR_NOMEM_LIB                         = 0x8002D005,
	SCE_KERNEL_ERROR_MODULEMGR_NOMEM_STUB                        = 0x8002D006,
	SCE_KERNEL_ERROR_MODULEMGR_NOMEM_SELF                        = 0x8002D007,
	SCE_KERNEL_ERROR_MODULEMGR_NOMEM                             = 0x8002D008,
	SCE_KERNEL_ERROR_MODULEMGR_INVALID_LIB                       = 0x8002D009,
	SCE_KERNEL_ERROR_MODULEMGR_INVALID_STUB                      = 0x8002D00A,
	SCE_KERNEL_ERROR_MODULEMGR_NO_FUNC_NID                       = 0x8002D00B,
	SCE_KERNEL_ERROR_MODULEMGR_NO_VAR_NID                        = 0x8002D00C,
	SCE_KERNEL_ERROR_MODULEMGR_INVALID_TYPE                      = 0x8002D00D,
	SCE_KERNEL_ERROR_MODULEMGR_NO_MOD_ENTRY                      = 0x8002D00E,
	SCE_KERNEL_ERROR_MODULEMGR_INVALID_PROC_PARAM                = 0x8002D00F,
	SCE_KERNEL_ERROR_MODULEMGR_NO_MODOBJ                         = 0x8002D010,
	SCE_KERNEL_ERROR_MODULEMGR_NO_MOD                            = 0x8002D011,
	SCE_KERNEL_ERROR_MODULEMGR_NO_PROCESS                        = 0x8002D012,
	SCE_KERNEL_ERROR_MODULEMGR_OLD_LIB                           = 0x8002D013,
	SCE_KERNEL_ERROR_MODULEMGR_STARTED                           = 0x8002D014,
	SCE_KERNEL_ERROR_MODULEMGR_NOT_STARTED                       = 0x8002D015,
	SCE_KERNEL_ERROR_MODULEMGR_NOT_STOPPED                       = 0x8002D016,
	SCE_KERNEL_ERROR_MODULEMGR_INVALID_PROCESS_UID               = 0x8002D017,
	SCE_KERNEL_ERROR_MODULEMGR_CANNOT_EXPORT_LIB_TO_SHARED       = 0x8002D018,
	SCE_KERNEL_ERROR_MODULEMGR_INVALID_REL_INFO                  = 0x8002D019,
	SCE_KERNEL_ERROR_MODULEMGR_INVALID_REF_INFO                  = 0x8002D01A,
	SCE_KERNEL_ERROR_MODULEMGR_ELINK                             = 0x8002D01B,
	SCE_KERNEL_ERROR_MODULEMGR_NOENT                             = 0x8002D01C,
	SCE_KERNEL_ERROR_MODULEMGR_BUSY                              = 0x8002D01D,
	SCE_KERNEL_ERROR_MODULEMGR_NOEXEC                            = 0x8002D01E,
	SCE_KERNEL_ERROR_MODULEMGR_NAMETOOLONG                       = 0x8002D01F,
	SCE_KERNEL_ERROR_LIBRARYDB_NOENT                             = 0x8002D080,
	SCE_KERNEL_ERROR_LIBRARYDB_NO_LIB                            = 0x8002D081,
	SCE_KERNEL_ERROR_LIBRARYDB_NO_MOD                            = 0x8002D082,
	SCE_KERNEL_ERROR_PRELOAD_FAILED                              = 0x8002D0F0,
	SCE_KERNEL_ERROR_PRELOAD_LIBC_FAILED                         = 0x8002D0F1,
	SCE_KERNEL_ERROR_PRELOAD_FIOS2_FAILED                        = 0x8002D0F2,
	SCE_KERNEL_ERROR_AUTHFAIL                                    = 0x8002F000,
	SCE_KERNEL_ERROR_NO_AUTH                                     = 0x8002F001
} SceKernelErrorCode;

#endif /* _PSP2_KERNEL_ERROR_H_ */

