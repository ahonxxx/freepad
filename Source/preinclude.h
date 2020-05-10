#define TC_LINKKEY_JOIN
#define NV_INIT
#define NV_RESTORE
#define INT_HEAP_LEN 2688

#define NWK_AUTO_POLL
#define MULTICAST_ENABLED FALSE

#define ZCL_READ
#define ZCL_BASIC
#define ZCL_IDENTIFY
#define ZCL_ON_OFF
#define ZCL_LEVEL_CTRL
#define ZCL_REPORTING_DEVICE

#define ZSTACK_DEVICE_BUILD (DEVICE_BUILD_ENDDEVICE)

#define DISABLE_GREENPOWER_BASIC_PROXY
#define BDB_FINDING_BINDING_CAPABILITY_ENABLED 1
#define BDB_REPORTING TRUE

#ifdef DEFAULT_CHANLIST
#undef DEFAULT_CHANLIST
#endif
#define DEFAULT_CHANLIST 0x07FFF800

#define ISR_KEYINTERRUPT
#define HAL_BUZZER FALSE

#define HAL_LED TRUE
#define BLINK_LEDS TRUE


//one of this boards
// #define HAL_BOARD_FREEPAD_20
// #define HAL_BOARD_FREEPAD_12
// #define HAL_BOARD_FREEPAD_8
// #define HAL_BOARD_CHDTECH_DEV

#if !defined(HAL_BOARD_FREEPAD_20) && !defined(HAL_BOARD_FREEPAD_12) && !defined(HAL_BOARD_FREEPAD_8) && !defined(HAL_BOARD_CHDTECH_DEV)
#error "Board type must be defined"
#endif



#ifdef HAL_BOARD_FREEPAD_20
#define FREEPAD_BUTTONS_COUNT 20
#elif defined(HAL_BOARD_FREEPAD_12)
#define FREEPAD_BUTTONS_COUNT 12
#elif defined(HAL_BOARD_FREEPAD_8)
#define FREEPAD_BUTTONS_COUNT 8
#elif defined(HAL_BOARD_CHDTECH_DEV)
#define FREEPAD_BUTTONS_COUNT 20
#endif

#ifdef NWK_MAX_BINDING_ENTRIES
    #undef NWK_MAX_BINDING_ENTRIES
#endif
#define NWK_MAX_BINDING_ENTRIES (20 + FREEPAD_BUTTONS_COUNT)

#if defined(HAL_BOARD_FREEPAD_20) || defined(HAL_BOARD_FREEPAD_12) || defined(HAL_BOARD_FREEPAD_8)
    #define HAL_UART FALSE
    #define POWER_SAVING
#elif defined(HAL_BOARD_CHDTECH_DEV)
    #define HAL_UART TRUE
    #define HAL_UART_ISR 2
    #define HAL_UART_DMA 1
#endif


#include "hal_board_cfg.h"
