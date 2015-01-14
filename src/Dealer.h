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
	virtual int get_value() const;
};

#endif /* DEALER_H_ */
