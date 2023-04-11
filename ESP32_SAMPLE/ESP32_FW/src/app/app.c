#include "app/app.h"

#define user_ledPin     2
#define ledPin          27


void task_LED1(void *param);
void task_LED2(void *param);

void APP_Init(void)
{
    /* User Application Initialize Start*/
    gpioPinMode(user_ledPin, 1);
    gpioPinMode(ledPin, 1);
    //gpio_reset_pin(user_ledPin);
    //gpio_set_direction(user_ledPin, GPIO_MODE_OUTPUT);
    //gpio_reset_pin(ledPin);
    //gpio_set_direction(ledPin, GPIO_MODE_OUTPUT);
    /* User Application Initialize End */
}

void APP_Main(void)
{
    /* User Application Start */
    xTaskCreate(task_LED1, "task1", 1024*2, NULL, 3, NULL);
    xTaskCreate(task_LED2, "task2", 1024*2, NULL, 3, NULL);
    /* User Application End */
}

void task_LED1(void *param) {

    //gpio_reset_pin(BLINK_GPIO_1);
    /* Set the GPIO as a push/pull output */
    //gpio_set_direction(BLINK_GPIO_1, GPIO_MODE_OUTPUT);

    while(1) {        

        //printf("this is from task 1\n");
        gpioWrite(user_ledPin, 1);
        delay(1000);
        gpioWrite(user_ledPin, 0);
        delay(1000);
        //gpio_set_level(user_ledPin , 0);  // LED OFF
        //vTaskDelay(1000 / portTICK_RATE_MS);
        //gpio_set_level(user_ledPin , 1);  // LED ON
        //vTaskDelay(1000 / portTICK_RATE_MS);
    }

    vTaskDelete(NULL);  // finishing the task
}

void task_LED2(void *param) {

    //gpio_reset_pin(BLINK_GPIO_2);
    /* Set the GPIO as a push/pull output */
    //gpio_set_direction(BLINK_GPIO_2, GPIO_MODE_OUTPUT);

    while(1) {

        //printf("this is from task 2\n");
        gpioWrite(ledPin, 1);
        delay(500);
        gpioWrite(ledPin, 0);
        delay(500);
        //gpio_set_level(ledPin, 0);  // LED OFF
        //vTaskDelay(300 / portTICK_RATE_MS);
        //gpio_set_level(ledPin, 1);  // LED ON
        //vTaskDelay(300 / portTICK_RATE_MS);
   }

    vTaskDelete(NULL);  // finishing the task
}