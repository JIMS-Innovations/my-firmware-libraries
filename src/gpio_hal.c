/**
 * @file gpio_hal.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmailcom)
 * @brief 
 * @version 0.1
 * @date 2025-03-20
 * 
 * @copyright Copyright (c) 2025
 * 
 */


 #include "gpio_hal.h"

 void gpio_set(GPIO_Interface *gpio, uint8_t pin, gpio_state_t state) {
     if (gpio && gpio->write) {
         gpio->write(pin, state);
     }
 }
 
 gpio_state_t gpio_get(GPIO_Interface *gpio, uint8_t pin) {
     if (gpio && gpio->read) {
         return gpio->read(pin);
     }
     return GPIO_LOW;
 }