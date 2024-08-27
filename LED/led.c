/*
 * led.c
 *
 *  Created on: Jul 20, 2024
 *      Author: d1550
 */

#include "led.h"
#include "gpio.h"

void ledon(void)
{
HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2, SET);
}

void ledoff(void)
{
	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2, RESET);

}

