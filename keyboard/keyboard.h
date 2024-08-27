/*
 * keyboard.c
 *
 *  Created on: Jul 23, 2024
 *      Author: d1550
 */
/*
 * keypad.h
 *
 *  Created on: Aug 27, 2020
 *      Author: HUAWEI
 */

#ifndef KEYPAD_KEYPAD_H_
#define KEYPAD_KEYPAD_H_

#define R1_PORT GPIOC
#define R1_PIN GPIO_PIN_15

#define R2_PORT GPIOC
#define R2_PIN GPIO_PIN_14

#define R3_PORT GPIOC
#define R3_PIN GPIO_PIN_13

#define R4_PORT GPIOC
#define R4_PIN GPIO_PIN_12

#define C1_PORT GPIOC
#define C1_PIN GPIO_PIN_5

#define C2_PORT GPIOC
#define C2_PIN GPIO_PIN_4

#define C3_PORT GPIOC
#define C3_PIN GPIO_PIN_3

#define C4_PORT GPIOC
#define C4_PIN GPIO_PIN_0


float read_keyvalue (void);


#endif /* KEYPAD_KEYPAD_H_ */



