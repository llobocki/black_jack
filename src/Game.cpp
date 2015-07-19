/*
 * Game.cpp
 *
 *  Created on: 22 mar 2015
 *      Author: lukasz
 */

#include "Game.h"
#include <iostream>

Game::Game(int number_of_decks, int number_of_games, double cut_deck,
		Strategy* dealer_strategy, Strategy* player_strategy,
		int number_of_boxes, int bet) :
		_dealer(Dealer(dealer_strategy)), _player(
				Player(player_strategy, number_of_boxes, bet)) {
	_number_of_decks = number_of_decks;
	_number_of_games = number_of_games;
	_cut_deck = cut_deck;
//	_dealer = Dealer(dealer_strategy);
//	_player = Player(player_strategy, number_of_boxes, bet);
	_deck = Deck(number_of_decks);
}

Game::~Game() {
}

bool Game::end_of_deck(int deck_size) {
	return 1.0 - double(deck_size) / (_number_of_decks * 52) < _cut_deck ?
			false : true;
}

void Game::play() {
	for (int i = _number_of_games; i > 0; --i) {
		_deck.shuffle();
		while (!end_of_deck(_deck.size())) {
			_player.init_boxes();
			_player.one_card(_deck);
			_dealer.one_card(_deck);
			_player.one_card(_deck);
			_player.play(_deck);
			if (_player.get_size() > 0) {
				_dealer.play(_deck);
				_player.scores(_dealer.get_value(), _dealer.black_jack());
			}
			_dealer.reset();
			_player.reset();
		}
	}
	std::cout << _player.get_bankroll() << '\n';
}
