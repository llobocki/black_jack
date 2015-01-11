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
	int _counter;
public:
	Player(Strategy* strategy);
	virtual ~Player();
};

#endif /* PLAYER_H_ */
