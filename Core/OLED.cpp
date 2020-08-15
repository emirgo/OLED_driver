/*
 * OLED.cpp
 *
 *  Created on: Aug 15, 2020
 *      Author: heuristik
 */

#include "OLED.h"

OLED::OLED() {
	// TODO Auto-generated cssonstructor stub

}

OLED::~OLED() {
	// TODO Auto-generated destructor stub
}

void OLED::reset(void)
{
	// Deactivate
	HAL_GPIO_WritePin(OLED_CS_GPIO_Port, OLED_CS_Pin, GPIO_PIN_SET);

	// Reset OLED
	HAL_GPIO_WritePin(OLED_RESET_GPIO_Port, OLED_RESET_Pin, GPIO_PIN_RESET);
	HAL_Delay(10);
	HAL_GPIO_WritePin(OLED_RESET_GPIO_Port, OLED_RESET_Pin, GPIO_PIN_SET);
	HAL_Delay(10);
}

