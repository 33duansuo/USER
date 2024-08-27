/*
 * motor.c
 *
 *  Created on: Jul 19, 2024
 *      Author: d1550
 */
#include "motor.h"
#include "tim.h"
#include "main.h"
void MotorInit()
{
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, GPIO_PIN_SET);
}
void Forward(uint32_t Duty)
{
	__HAL_TIM_SET_PRESCALER(&htim3,Duty);
	__HAL_TIM_SET_PRESCALER(&htim4,Duty);
	__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_1,250);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1,250);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, GPIO_PIN_SET);
}

void Turn(uint32_t L_Duty,uint32_t R_Duty)
{
	__HAL_TIM_SET_PRESCALER(&htim3,L_Duty);
	__HAL_TIM_SET_PRESCALER(&htim4,R_Duty);
	__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_1,250);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1,250);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, GPIO_PIN_SET);
}

void Stop()
{
	__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_1,0);
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1,0);
}







