/*
 * Deck_test.cpp
 *
 *  Created on: 10 sty 2015
 *      Author: lukasz
 */

#include <unittest++/UnitTest++.h>
#include "../src/Deck.h"

#include <iostream>
SUITE(Deck) {
TEST(negative_deck) {
	CHECK(false);
}
//sprawdzanie konstruktorów
TEST(Deck) {
	Deck deck = Deck();
	Card card = Card();
	CHECK_EQUAL(52, deck.get_size());
	for (int i = 4; i > 0; --i)
		for (int j = 13; j > 0; --j) {
			card = deck.get_card();
			CHECK_EQUAL(i, card.get_colour());
			CHECK_EQUAL(j, card.get_value());
//			std::cout << temp.first << '\t' << temp.second << '\n';
		}

	deck = Deck(6);
	CHECK_EQUAL(6 * 52, deck.get_size());
//	std::pair<int, int> temp;
	for (int h = 0; h < 6; ++h)
		for (int i = 4; i > 0; --i)
			for (int j = 13; j > 0; --j) {
				card = deck.get_card();
				CHECK_EQUAL(i, card.get_colour());
				CHECK_EQUAL(j, card.get_value());
//			std::cout << temp.first << '\t' << temp.second << '\n';
			}
}
tasowanie
TEST(shuffle) {
	Deck deck_before = Deck();
	Deck deck_after = deck_before;
	deck_after.shuffle();
	CHECK(deck_before != deck_after);
}
}

