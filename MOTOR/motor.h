/*
 * motor.h
 *
 *  Created on: Jul 19, 2024
 *      Author: d1550
 */

#ifndef MOTOR_MOTOR_H_
#define MOTOR_MOTOR_H_
#include "main.h"
#include "delay.h"

void MotorInit();
void Forward(uint32_t duty);
void Turn(uint32_t L_Duty,uint32_t R_Duty);
void Stop();

#endif /* MOTOR_MOTOR_H_ */
