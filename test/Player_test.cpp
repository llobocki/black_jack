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
TEST(Player_one_box_without_play) {

	Strategy* take_17 = new Take_17();
	Player player = Player(take_17, 1, 10);

	CHECK_EQUAL(0, player.get_size());
	CHECK_EQUAL(0, player.get_bankroll());
	player.init_boxes();
	CHECK_EQUAL(-10, player.get_bankroll());
	CHECK_EQUAL(1, player.get_size());

	std::stack<Card> cards;
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(9)));
	Deck deck = Deck(cards);

	player.one_card(deck);
	player.one_card(deck);
	player.play(deck);
	CHECK_EQUAL(0, deck.size());
	CHECK_EQUAL(-10, player.get_bankroll());
	CHECK_EQUAL(1, player.get_size());

	player.scores(20);
	CHECK_EQUAL(-10, player.get_bankroll());

	player.scores(19);
	CHECK_EQUAL(0, player.get_bankroll());

	player.scores(18);
	CHECK_EQUAL(20, player.get_bankroll());

	player.reset();
	CHECK_EQUAL(0, player.get_size());
}
TEST(Player_one_box_with_play) {

	Strategy* take_17 = new Take_17();
	Player player = Player(take_17, 1, 10);

	player.init_boxes();
	CHECK_EQUAL(1, player.get_size());

	std::stack<Card> cards;
	cards.push(Card(Card::Colour(1), Card::Value(4)));
	cards.push(Card(Card::Colour(1), Card::Value(6)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	Deck deck = Deck(cards);

	player.one_card(deck);
	player.one_card(deck);
	player.play(deck);
	CHECK_EQUAL(0, deck.size());
	player.scores(18);
	CHECK_EQUAL(10, player.get_bankroll());
}
TEST(Player_two_boxes_withot_play) {
	Strategy* take_17 = new Take_17();
	Player player = Player(take_17, 2, 10);
	player.init_boxes();
	CHECK_EQUAL(2, player.get_size());

	std::stack<Card> cards;
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	Deck deck = Deck(cards);

	player.one_card(deck);
	player.one_card(deck);
	player.play(deck);
	CHECK_EQUAL(0, deck.size());
	player.scores(20);
	CHECK_EQUAL(0, deck.size());
	player.reset();

}
TEST(Player_two_boxes_with_play) {
	Strategy* take_17 = new Take_17();
	Player player = Player(take_17, 2, 10);
	player.init_boxes();
	CHECK_EQUAL(2, player.get_size());

	std::stack<Card> cards;
	cards.push(Card(Card::Colour(1), Card::Value(2)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(6)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	Deck deck = Deck(cards);

	player.one_card(deck);
	CHECK_EQUAL(3, deck.size());

	player.one_card(deck);
	player.play(deck);
	CHECK_EQUAL(0, deck.size());

	player.scores(21);
	CHECK_EQUAL(-20, player.get_bankroll());

	player.scores(20);
	CHECK_EQUAL(-10, player.get_bankroll());

	player.scores(19);
	CHECK_EQUAL(10, player.get_bankroll());

	player.scores(17);
	CHECK_EQUAL(50, player.get_bankroll());

	player.scores(22);
	CHECK_EQUAL(90, player.get_bankroll());

	CHECK_EQUAL(0, deck.size());
	player.reset();

}

TEST(Player_too_many){
	Strategy* take_17 = new Take_17();
	Player player = Player(take_17, 2, 10);
	player.init_boxes();
	CHECK_EQUAL(2, player.get_size());

	std::stack<Card> cards;
	cards.push(Card(Card::Colour(1), Card::Value(6)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(6)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	Deck deck = Deck(cards);

	player.one_card(deck);
	player.one_card(deck);
	player.play(deck);

	player.scores(17);
	CHECK_EQUAL(1, player.get_size());
	CHECK_EQUAL(0, player.get_bankroll());
	player.reset();
}

TEST(Player_black_jack){
	Strategy* take_17 = new Take_17();
	Player player = Player(take_17, 1, 10);
	player.init_boxes();
	CHECK_EQUAL(1, player.get_size());

	std::stack<Card> cards;
	cards.push(Card(Card::Colour(1), Card::Value(1)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(6)));
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	Deck deck = Deck(cards);

	player.one_card(deck);
	player.one_card(deck);
	// player.play(deck);


	// player.play(deck);
	// CHECK_EQUAL(1, deck.size());
}
}
