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
	CHECK_EQUAL(52, deck.size());
	for (int i = 4; i > 0; --i)
		for (int j = 13; j > 0; --j) {
			card = deck.get_card();
			CHECK_EQUAL(i, card.get_colour());
			CHECK_EQUAL(j, card.get_value());
//			std::cout << temp.first << '\t' << temp.second << '\n';
		}

	deck = Deck(6);
	CHECK_EQUAL(6 * 52, deck.size());
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
//empty
TEST(empty) {
	Deck d = Deck();
	CHECK(!d.empty());
	while (!d.empty())
		d.get_card();
	CHECK(d.empty());
}
//niepotasowane decki
TEST(unshuffle) {
	Deck d = Deck();
	Deck e = Deck();
	while (!d.empty() && !e.empty()) {
		CHECK(d.get_card() == e.get_card());
	}

}
//tasowanie
TEST(shuffle) {
	bool shuffled = false;
	Deck deck_before = Deck();
	Deck deck_after = deck_before;
	deck_after.shuffle();
	CHECK_EQUAL(deck_before.size(), deck_after.size());
	while (!deck_after.empty() && !deck_before.empty()) {
		if (deck_after.get_card() != deck_before.get_card())
			shuffled = true;
	}
	CHECK(shuffled);
}
}
