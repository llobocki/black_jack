/*
 * Box.h
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#ifndef BOX_H_
#define BOX_H_

#include <stack>
#include "Card.h"

class Box {
private:
	std::stack<Card> _box;
	int _bet;
	int _value;
public:
	Box();
	Box(const int bet);
	virtual ~Box();

	void card(const Card card);

	int get_bet() const;
	int get_value() const;
	int size_box() const;
};

#endif /* BOX_H_ */
