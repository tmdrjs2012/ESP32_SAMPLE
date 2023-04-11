#ifdef __cplusplus
extern "C" {
#endif

#include "hw_def.h"

#ifdef _USE_HW_GPIO

#define GPIO_MAX_CH     HW_GPIO_MAX_CH


void gpioInit(void);
void gpioPinMode(uint8_t ch, uint8_t mode);
void gpioWrite(uint8_t ch, uint8_t value);
bool gpioRead(uint8_t ch);


#endif

#ifdef __cplusplus
}
#endif