/*
 * beep.c
 *
 *  Created on: Jul 20, 2024
 *      Author: d1550
 */
#include "beep.h"
#include "led.h"
#include "delay.h"

void beepon()
{

	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, GPIO_PIN_RESET);
	ledon();
	delay_ms(300);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, GPIO_PIN_SET);
	ledoff();
	delay_ms(300);


}

void beepoff()
{

	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, GPIO_PIN_RESET);

}




