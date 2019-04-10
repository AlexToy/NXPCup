/*
 * motor_right.h
 *
 *  Created on: 10 avr. 2019
 *      Author: alexandreharistoy
 */

#ifndef MOTOR_RIGHT_H_
#define MOTOR_RIGHT_H_

#include "stm32f1xx.h"

TIM_HandleTypeDef htim2;

void MX_TIM2_Init();
void motor_right_start();
void motor_right_stop();

#endif /* MOTOR_RIGHT_H_ */
