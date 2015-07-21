#include "../src/Dealer.h"
#include <unittest++/UnitTest++.h>

#include "../src/Take17.h"

SUITE(Dealer) {
TEST(Dealer) {
	Strategy* take_17 = new Take_17();
	Dealer dealer = Dealer(take_17);

	std::stack<Card> cards;
	cards.push(Card(Card::Colour(1), Card::Value(10)));
	cards.push(Card(Card::Colour(1), Card::Value(9)));
	Deck deck = Deck(cards);

	dealer.one_card(deck);
	CHECK_EQUAL(9, dealer.get_value());

	dealer.play(deck);
	CHECK_EQUAL(19, dealer.get_value());
	CHECK_EQUAL(0, deck.size());
	dealer.reset();

	std::stack<Card> cards_1;
	cards_1.push(Card(Card::Colour(1), Card::Value(10)));
	cards_1.push(Card(Card::Colour(1), Card::Value(5)));
	cards_1.push(Card(Card::Colour(1), Card::Value(9)));
	cards_1.push(Card(Card::Colour(1), Card::Value(2)));
	cards_1.push(Card(Card::Colour(1), Card::Value(4)));
	deck = Deck(cards_1);

	dealer.one_card(deck);
	dealer.play(deck);
	CHECK_EQUAL(20, dealer.get_value());
	CHECK_EQUAL(1, deck.size());
	dealer.reset();

	deck = Deck(cards_1);
	dealer.one_card(deck);
	CHECK_EQUAL(4, dealer.get_value());

//	dealer.take_card(Card(Card::Colour(1), Card::Value(10)));
//	CHECK_EQUAL(10, dealer.get_value());
//	CHECK_EQUAL(true,dealer.decision());
//	dealer.take_card(Card(Card::Colour(1), Card::Value(7)));
//	CHECK_EQUAL(17, dealer.get_value());
//	CHECK_EQUAL(false,dealer.decision());
}
}
