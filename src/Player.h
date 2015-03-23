/*
 * Player.h
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "Person.h"
#include <list>

#include "Deck.h"

class Player: public Person {
private:
	std::list<Box> _boxes;
	int _bankroll;
	int _number_of_boxes;
	int _bet;
//	int _counter;
public:
	Player(Strategy* strategy, int number_of_boxes, int bet);
	virtual ~Player();

	int get_value() const;
	int get_bankroll() const;
//	Box get_box() const;
	void take_card(Card card);
	bool decision(int rival_value=0);

	int get_size() const;
	void reset();

	void init_boxes();
	void one_card(Deck& deck);
	void play(Deck &deck);

	void scores(int dealer_value);

//	void play(Deck deck);
};

#endif /* PLAYER_H_ */