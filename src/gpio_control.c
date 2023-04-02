#include "driver/gpio.h"
#include "gpio_config.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void led_diodes_gpio_config(void)
{
    gpio_reset_pin(BLINK_LED_1);
    gpio_set_direction(BLINK_LED_1, GPIO_MODE_OUTPUT);
    gpio_reset_pin(BLINK_LED_2);
    gpio_set_direction(BLINK_LED_2, GPIO_MODE_OUTPUT);
}

void led_blinking_opposite(void)
{
    gpio_set_level(BLINK_LED_1, 1);
    gpio_set_level(BLINK_LED_2, 0);
    vTaskDelay(BLINK_PERIOD_MS / portTICK_PERIOD_MS);
    gpio_set_level(BLINK_LED_1, 0);
    gpio_set_level(BLINK_LED_2, 1);
    vTaskDelay(BLINK_PERIOD_MS / portTICK_PERIOD_MS);
}