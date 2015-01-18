/*
 * Player_test.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "../src/Player.h"
#include <unittest++/UnitTest++.h>

#include "../src/Take17.h"
//#include "../src/Deck.h"
#include <stack>
SUITE(Player) {
TEST(negative_Player) {
	CHECK(false);
}
TEST(Player) {

	Strategy* take_17 = new Take_17();
	Player player = Player(take_17, 1);
	CHECK_EQUAL(0, player.get_size());
	player.init_boxes();
	CHECK_EQUAL(1, player.get_size());
	std::stack<Card> cards;
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(9)));
	Deck deck = Deck(cards);
	player.one_card(deck);
	player.one_card(deck);
	CHECK_EQUAL(0, deck.size());
	std::vector<int> scores = player.scores();
	CHECK_EQUAL(19, scores[0]);
	player.reset();
	CHECK_EQUAL(0, player.get_size());


	player.init_boxes();
	CHECK_EQUAL(1, player.get_size());
	std::stack<Card> cards_1;
	cards_1.push(Card(Card::Colour(1), Card::Value(10)));
	cards_1.push(Card(Card::Colour(1), Card::Value(20)));
	deck = Deck(cards_1);
	player.one_card(deck);
	player.one_card(deck);
	CHECK_EQUAL(0, deck.size());
	scores = player.scores();
	CHECK_EQUAL(20, scores[0]);
//	std::queue<Card> cards;
//	cards.push(Card(Card::Colour(1), Card::Value(10)));
//	player.take_card(Card(Card::Colour(1), Card::Value(10)));
//	CHECK_EQUAL(10, player.get_value());
//	CHECK_EQUAL(true,player.decision());
//	player.take_card(Card(Card::Colour(1), Card::Value(7)));
//	CHECK_EQUAL(17, player.get_value());
//	CHECK_EQUAL(false,player.decision());
}
TEST(Player_two_boxes) {
	Strategy* take_17 = new Take_17();
	Player player = Player(take_17, 2);
	player.init_boxes();
	CHECK_EQUAL(2, player.get_size());
}
}
