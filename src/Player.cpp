/*
 * Player.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Player.h"


Player::Player(Strategy* strategy): Person(strategy) {
	_bankroll = 0;
	_counter = 0;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

