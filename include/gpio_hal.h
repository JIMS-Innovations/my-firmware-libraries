/**
 * @file gpio_hal.h
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmailcom)
 * @brief
 * @version 0.1
 * @date 2025-03-20
 *
 * @copyright Copyright (c) 2025
 *
 */

#ifndef GPIO_HAL_H
#define GPIO_HAL_H

#include <stdint.h>

typedef enum
{
    GPIO_LOW    = 0,
    GPIO_HIGH   = 1
} gpio_state_t;

typedef struct
{
    void (*init)(uint8_t pin);
    void (*write)(uint8_t pin, gpio_state_t state);
    gpio_state_t (*read)(uint8_t pin);
} GPIO_Interface;

/* Public API */
void gpio_set(GPIO_Interface *gpio, uint8_t pin, gpio_state_t state);
gpio_state_t gpio_get(GPIO_Interface *gpio, uint8_t pin);

/**
 * External Declarations of Platform-Specific Implementations
 */

#ifdef STM32_PLATFORM
extern GPIO_Interface gpio_stm32;
#endif

#ifdef ESP32_PLATFORM
extern GPIO_Interface gpio_esp32;
#endif

#ifdef GENERIC_PLATFORM
extern GPIO_Interface gpio_generic;
#endif

#endif
