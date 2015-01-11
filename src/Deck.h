/*
 * Deck.h
 *
 *  Created on: 6 sty 2015
 *      Author: lukasz
 */

#ifndef DECK_H_
#define DECK_H_

#include <stack>
#include <vector>
#include "Card.h"

class Deck {
private:
	std::stack<Card> deck;
	std::vector<Card> shuffled_vector;
public:
	Deck();
	Deck(int size);
	virtual ~Deck();

	void shuffle();

	Card get_card();
	bool empty() const;
	int size() const;


};

#endif /* DECK_H_ */
