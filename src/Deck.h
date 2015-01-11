/*
 * Deck.h
 *
 *  Created on: 6 sty 2015
 *      Author: lukasz
 */

#ifndef DECK_H_
#define DECK_H_

#include <stack>
#include <utility>
#include "Card.h"

class Deck {
private:
	std::stack<Card> deck;
public:
	Deck();
	Deck(int size);
	virtual ~Deck();

	void shuffle();

	Card get_card();

	int get_size() const;

	int get_colour() const;
	int get_value() const;

};

#endif /* DECK_H_ */
