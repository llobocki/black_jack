/*
 * Box_test.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "../src/Box.h"

#include <unittest++/UnitTest++.h>
//#include "../src/Card.h"

SUITE(Box) {

//sprawdzenie konstruktorów
TEST(Box) {
	Box box = Box();
	CHECK_EQUAL(0, box.get_bet());
	CHECK_EQUAL(0, box.get_value());
	CHECK_EQUAL(0, box.size_box());

	box = Box(10);
	CHECK_EQUAL(10, box.get_bet());
	CHECK_EQUAL(0, box.get_value());
	CHECK_EQUAL(0, box.size_box());
}

//box bierze kartę
TEST(card) {
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {
			Card c = Card(Card::Colour(i), Card::Value(j));
			Box box = Box(10);
			box.card(c);
			CHECK_EQUAL(10, box.get_bet());
			CHECK_EQUAL(
					[](Card c) {return c.get_value() < 11 ? c.get_value(): 10;
					}(c), box.get_value());
			CHECK_EQUAL(1, box.size_box());
		}
}

TEST(two_card) {
	for (int j = 1; j < 14; ++j) {
		Card c = Card(Card::Colour(1), Card::Value(j));
		Box box = Box(10);
		box.card(c);
		box.card(c);
		CHECK_EQUAL(10, box.get_bet());
		CHECK_EQUAL([](Card c) {return c.get_value() < 11 ? c.get_value(): 10;
		}(c)*2, box.get_value());
		CHECK_EQUAL(2, box.size_box());
	}

}
}
