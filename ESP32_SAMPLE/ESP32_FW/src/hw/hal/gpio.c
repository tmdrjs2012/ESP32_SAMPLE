#include "hw/hal/gpio.h"
#include "driver/gpio.h"

void gpioInit(void)
{
    int idx = 0;
    for(idx = 0; idx < 32; idx++)
        gpio_reset_pin(idx);
}

void gpioPinMode(uint8_t ch, uint8_t mode)
{
    if(mode == 1)
    {
        gpio_reset_pin(ch);
        gpio_set_direction(ch, GPIO_MODE_OUTPUT);
    }
    if(mode == 0)
    {
        gpio_reset_pin(ch);
        gpio_set_direction(ch, GPIO_MODE_INPUT);
    }
    
}

void gpioWrite(uint8_t ch, uint8_t value)
{
    gpio_set_level(ch, value);
}

bool gpioRead(uint8_t ch)
{
    return gpio_get_level(ch);
}