/*
 * Box.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Box.h"

#include "iostream"
Box::Box() {
	_bet = 0;
	_value = 0;
	_ace = false;
	// TODO Auto-generated constructor stub

}

Box::~Box() {
	// TODO Auto-generated destructor stub
}


int Box::card_value(int value) const{
	return value < 10 ? value : 10;
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
	_ace = false;
}

void Box::card(const Card card, int bet) {
	if (bet > 0)
		_bet += bet;
	_box.push(card);
	if (card.get_value() == 1) {
		_ace = true;
	}
	_value += card_value(card.get_value());
}

bool Box::black_jack() const {
	return _box.size() == 2 && _value == 11 && _ace == true ? true : false;
}

bool Box::can_split(int split_counter) const{
	return (split_counter < 4 ) && _value % card_value((_box.top()).get_value()) == 0 ? true : false;
}
