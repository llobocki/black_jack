/*
 * card_test.cpp
 *
 *  Created on: 29 mar 2014
 *      Author: lukasz
 */

#include <functional>
#include <vector>
#include <algorithm>
#include <iostream>

#include <unittest++/UnitTest++.h>
#include "../src/Card.h"

SUITE(Card) {
TEST(negative_card) {
	CHECK(false);
}
//sprawdzenie konstruktorów
TEST(Card) {
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {
			Card c = Card(Card::Colour(i), Card::Value(j));
			CHECK_EQUAL(i, c.get_colour());
			CHECK_EQUAL(j, c.get_value());

			Card d = Card(c);
			CHECK_EQUAL(i, d.get_colour());
			CHECK_EQUAL(j, d.get_value());

			Card e = Card();
			CHECK_EQUAL(e.get_colour(), 1);
			CHECK_EQUAL(e.get_value(), 1);

		}
}
//sprawdzenie operatora porównania
TEST(comparison) {
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {
			Card c = Card(Card::Colour(i), Card::Value(j));
			CHECK(c==c);
		}
	Card c = Card(Card::Colour(1), Card::Value(1));
	Card d = Card(Card::Colour(1), Card::Value(2));
	CHECK(c!=d);
}
}
//TEST(deck) {
//	std::vector<Card> deck;
//	for (int h = 0; h < 6; ++h)
//		for (int i = 1; i < 5; ++i)
//			for (int j = 1; j < 14; ++j) {
//				deck.push_back(Card(Card::Color(i), Card::Value(j)));
//			}
//	CHECK_EQUAL(312, deck.size());
//
//	std::vector<Card> deck_cp(deck);
//
//	std::random_shuffle(deck_cp.begin(), deck_cp.end());
//
//	CHECK_EQUAL(312, deck_cp.size());
//
//	std::sort(deck_cp.begin(), deck_cp.end(),
//			[](const Card & c, const Card & d)->bool {return ((c.get_colour()-1)*13+c.get_num())<((d.get_colour()-1)*13+d.get_num());});
//
////	for (int i = 0; i < 60; ++i){
////		std::cout << deck[i].get_colour() << '\t' << deck[i].get_value() << '\n';
////	}
//
////	CHECK_ARRAY_EQUAL(deck, deck_cp)
//	int x = 0;
//	for (int i = 1; i < 5; ++i)
//		for (int j = 1; j < 14; ++j)
//			for (int h = 0; h < 6; ++h) {
//				CHECK_EQUAL(
//						deck[(h * 52) + ((i - 1) * 13) + j - 1].get_colour(),
//						deck_cp[x++].get_colour());
////				std::cout
////						<< deck[(h * 52) + ((i - 1) * 13) + j - 1].get_colour()
////						<< '\t' << ((h * 52) + ((i - 1) * 13) + j - 1) << '\n';
////		CHECK_EQUAL(deck[i].get_value(),deck_cp[i].get_value());
//
//			}
//}
//
//TEST(card_counter) {
//	std::vector<Card> deck;
//	for (int h = 0; h < 6; ++h)
//		for (int i = 1; i < 5; ++i)
//			for (int j = 1; j < 14; ++j) {
//				deck.push_back(Card(Card::Color(i), Card::Value(j)));
//			}
//	int sum = 0;
//	for (size_t i = 0; i < deck.size(); ++i) {
//		sum += deck[i].cards_counter();
////		std::cout << sum << '\n';
//	}
//	CHECK_EQUAL(0, sum);
//
//}
//}

