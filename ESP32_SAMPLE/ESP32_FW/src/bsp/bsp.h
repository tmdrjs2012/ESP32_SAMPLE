
#ifdef __cplusplus
extern "C" {
#endif

#include "common/esp_def.h"


#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"


#include "sdkconfig.h"
#include "freertos/semphr.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp_task_wdt.h"
#include "esp_chip_info.h"
#include "soc/rtc.h"

#include "esp_timer.h"



#if 0
#define _USE_LOG_PRINT    1

#if _USE_LOG_PRINT
#define logPrintf(fmt, ...)     printf(fmt, ##__VA_ARGS__)
#else
#define logPrintf(fmt, ...)
#endif
#endif

//void logPrintf(const char *fmt, ...);


void BSP_Init(void);

void delay(uint32_t ms);
uint32_t millis(void);
uint32_t micros(void);

#ifdef __cplusplus
}
#endif
