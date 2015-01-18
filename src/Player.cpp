/*
 * Player.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Player.h"


Player::Player(Strategy* strategy, int number_of_boxes): Person(strategy) {
	_bankroll = 0;
	_number_of_boxes = number_of_boxes;
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

int Player::get_size() const {
	return _boxes.size();
}

void Player::init_boxes() {
	for (int i = 0; i < _number_of_boxes; ++i)
	_boxes.push_back(Box());
}

void Player::one_card(Deck& deck) {
	for(auto& box : _boxes){
		box.card(deck.get_card());
	}
}

void Player::reset() {
	_boxes.clear();
}

std::vector<int> Player::scores() const {
	std::vector<int> temp;
	for (auto& box : _boxes)
		temp.push_back(box.get_value());
	return temp;
}
//void Player::play(Deck deck) {
//}
