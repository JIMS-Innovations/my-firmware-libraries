/**
 * @file main.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmailcom)
 * @brief 
 * @version 0.1
 * @date 2025-03-21
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 /* Defines */
 #define GENERIC_PLATFORM

#include <stdio.h>
#include <time.h>
#include "gpio_hal.h"



int main()
{
    while(1)
    {
        gpio_set(&gpio_generic, 1, GPIO_HIGH);
        gpio_set(&gpio_generic, 1, GPIO_LOW);
        gpio_get(&gpio_generic, 1);  
    }
    return 0;
}