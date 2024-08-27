/*
 * encoder.c
 *
 *  Created on: Jul 23, 2024
 *      Author: d1550
 */
#include "main.h"
#include "encoder.h"
#include "tim.h"

float readencoder1(void)
{
	float count,encoder;
    count = (uint32_t)(__HAL_TIM_GET_COUNTER(&htim5));	//获取定时器的值

	if(TIM7->CNT>9900)
	{
		TIM7->CNT=0;
		encoder=count;
		 __HAL_TIM_SET_COUNTER(&htim5,0);

	}
	return encoder;
}

