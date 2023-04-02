/*
    gpio_config.h

    Created: 02.04.2023r.
    By: AK
*/

#define BLINK_LED_1 2
#define BLINK_LED_2 12
#define BLINK_PERIOD_MS 1000


void led_diodes_gpio_config(void);
void led_blinking_opposite(void);