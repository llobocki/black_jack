/*
 * Take17.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Take17.h"

Take_17::Take_17() :
		Strategy() {
}

Take_17::~Take_17() {
}

bool Take_17::decission(const Box my_box, const int rival_value,
		const int card_counter) {
	return my_box.get_value() < 17 ? true : false;
}
