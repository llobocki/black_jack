/*
 * Dealer.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Dealer.h"

Dealer::Dealer(Strategy* strategy): Person(strategy) {
	// TODO Auto-generated constructor stub

}

Dealer::~Dealer() {
	// TODO Auto-generated destructor stub
}

int Dealer::get_value() const {
	return _box.get_value();
}

//Box Dealer::get_box() const {
//	return _box;
//}

void Dealer::take_card(Card card) {
	_box.card(card);
}

void Dealer::play(Deck& deck) {
	while( _strategy->decission(_box))
		_box.card(deck.get_card());
}

bool Dealer::decision(int rival_value) {
	return _strategy->decission(_box, rival_value);
}

void Dealer::reset() {
	_box = Box();
}

void Dealer::one_card(Deck& deck) {
	_box.card(deck.get_card());
}
