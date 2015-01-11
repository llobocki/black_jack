/*
 * Box.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Box.h"

Box::Box() {
	_bet = 0;
	_value = 0;
	// TODO Auto-generated constructor stub

}

Box::~Box() {
	// TODO Auto-generated destructor stub
}

int Box::get_bet() const {
	return _bet;
}

int Box::get_value() const {
	return _value;
}

int Box::size_box() const {
	return _box.size();
}

Box::Box(const int bet) {
	_bet = bet;
	_value = 0;
}
