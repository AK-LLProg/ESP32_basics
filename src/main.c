#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "gpio_config.h"



void app_main(void)
{
    led_diodes_gpio_config();

    while (1) {
        led_blinking_opposite();
    }
}

