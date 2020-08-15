/*
 * OLED.h
 *
 *  Created on: Aug 15, 2020
 *      Author: heuristik
 */

#ifndef OLED_H_
#define OLED_H_

#include "main.h"

class OLED {
public:
	OLED();
	virtual ~OLED();

	void reset(void);
};

#endif /* OLED_H_ */
