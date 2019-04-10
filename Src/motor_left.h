/*
 * motor_left.h
 *
 *  Created on: 10 avr. 2019
 *      Author: alexandreharistoy
 */

#ifndef MOTOR_LEFT_H_
#define MOTOR_LEFT_H_

#include "stm32f1xx.h"

TIM_HandleTypeDef htim3;

void MX_TIM3_Init();
void motor_left_start();
void motor_left_stop();


#endif /* MOTOR_LEFT_H_ */
