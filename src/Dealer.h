/*
 * Dealer.h
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#ifndef DEALER_H_
#define DEALER_H_

#include "Person.h"
#include "Decision.h"

class Dealer: public Person {
private:
	Box _box;
public:
	Dealer(Strategy* strategy);
	virtual ~Dealer();

	void play(Deck& deck, int rival_value=0);

	int get_value() const;
	bool black_jack() const;
//	Box get_box() const;
	void take_card(Card card);
	Decision decision(int rival_value=0);
	void reset();
	void one_card(Deck& deck);
};

#endif /* DEALER_H_ */
