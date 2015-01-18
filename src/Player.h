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

class Player: public Person {
private:
	std::list<Box> _boxes;
	int _bankroll;
//	int _counter;
public:
	Player(Strategy* strategy);
	virtual ~Player();

	int get_value() const;
//	Box get_box() const;
	void take_card(Card card);
	bool decision(int rival_value=0);
};

#endif /* PLAYER_H_ */
