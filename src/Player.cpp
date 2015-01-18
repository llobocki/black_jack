/*
 * Player.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Player.h"


Player::Player(Strategy* strategy): Person(strategy) {
	_bankroll = 0;
//	_counter = 0;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

int Player::get_value() const {
	return 0;
}

void Player::take_card(Card card) {
}

bool Player::decision(int rival_value) {
	return true;
}
