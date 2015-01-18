/*
 * Dealer.h
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#ifndef DEALER_H_
#define DEALER_H_

#include "Person.h"

class Dealer: public Person {
private:
	Box _box;
public:
	Dealer(Strategy* strategy);
	virtual ~Dealer();

	int get_value() const;
//	Box get_box() const;
	void take_card(Card card);
	bool decision(int rival_value=0);

};

#endif /* DEALER_H_ */
