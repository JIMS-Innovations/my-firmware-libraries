/**
 * @file gpio_generic.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmailcom)
 * @brief 
 * @version 0.1
 * @date 2025-03-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "gpio_hal.h"
#include <stdio.h>

void init_generic(uint8_t pin)
{
    printf("Pin %d initialised!\r\n", pin);
}

void write_generic(uint8_t pin, gpio_state_t state)
{
    printf("Pin %d is set %s\r\n", pin, (state == GPIO_HIGH) ? "HIGH" : "LOW");
}

gpio_state_t read_generic(uint8_t pin)
{
    return GPIO_LOW;
}

GPIO_Interface gpio_generic = 
{
    .init = init_generic,
    .write = write_generic,
    .read = read_generic
};