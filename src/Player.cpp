/*
 * Player.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Player.h"
#include "iostream"
#include "Decision.h"

Player::Player(Strategy* strategy, int number_of_boxes, int bet) :
		Person(strategy) {
	_bankroll = 0;
	_number_of_boxes = number_of_boxes;
	_bet = bet;
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

Decision Player::decision(int rival_value) {
	return Decision::card;
//	return _strategy->decission(_box, rival_value);
}

int Player::get_size() const {
	return _boxes.size();
}

void Player::init_boxes() {
	for (int i = 0; i < _number_of_boxes; ++i) {
		_boxes.push_back(Box(_bet));
		_bankroll -= _bet;
	}
}

void Player::one_card(Deck& deck) {
	for (auto& box : _boxes) {
		box.card(deck.get_card());
	}
}

void Player::reset() {
	_boxes.clear();
}

void Player::play(Deck& deck) {
	auto box = _boxes.begin();
	while (box != _boxes.end()) {
		if (!(*box).black_jack()) {
			while (_strategy->decission(*box) == Decision::card)
				(*box).card(deck.get_card());
			if ((*box).get_value() < 22)
				++box;
			else
				box = _boxes.erase(box);
	}
	else{
		++box;
	}
}
	//	for (auto& box : _boxes) {
//		while (_strategy->decission(box))
//			box.card(deck.get_card());
//	}
}

int Player::get_bankroll() const {
	return _bankroll;
}

void Player::scores(int dealer_value, bool dealer_black_jack) {
	for (auto& box : _boxes) {
		if (box.black_jack() && dealer_black_jack)
			_bankroll += box.get_bet();
		else if (box.black_jack())
			_bankroll += box.get_bet() + box.get_bet() * 3 / 2;
		else if ( !box.black_jack() && dealer_black_jack)
			{}
		else if (dealer_value > 21 || box.get_value() > dealer_value)
			_bankroll += box.get_bet() * 2;
		else if (box.get_value() == dealer_value)
			_bankroll += box.get_bet();
	}
}
//void Player::play(Deck deck) {
//}
