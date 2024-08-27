/*
 * chaosheng.c
 *
 *  Created on: Jul 20, 2024
 *      Author: d1550
 */

#include "chaosheng.h"
#include "main.h"
#include "tim.h"
#include "Delay.h"

uint8_t fUltrasonic = 1;


void CheckUltrasonic(void)
{
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_SET);		//6是发射的trig
	delay_us(10);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6,GPIO_PIN_RESET);
	fUltrasonic = 1;
	while(!HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_7));	//
	TIM6->CNT = 0;
	while(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_7))      //7是接收的echo
	{
		if(TIM6->CNT > 65000)                        //TIM6进行计时
		{
			fUltrasonic =0;
			return;
		}
	}
}

float GetDistance(void)
{
	unsigned int distance;
	if(fUltrasonic)
	{
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_SET);		//´¥·¢ÐÅºÅ
		delay_us(10);	//
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_RESET);
		while(!HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_7));	//µÈ´ý»ØÏìÐÅºÅ±ä¸ß
		TIM6->CNT = 0;
		while(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_7))
		{
			if(TIM6->CNT > 25000)
			{
				return 65535;
			}

		}

		distance = TIM6->CNT;
		distance = distance * 17 / 100;

		return distance;
	}
	else
	{
		return 0;
	}
}


