/*
 * Dealer_test.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "../src/Dealer.h"
#include <unittest++/UnitTest++.h>

#include "../src/Take17.h"

SUITE(Dealer) {
TEST(negative_Dealer) {
	CHECK(false);
}
TEST(Dealer) {
	Strategy* take_17 = new Take_17();
	Dealer dealer = Dealer(take_17);
	dealer.take_card(Card(Card::Colour(1), Card::Value(10)));
	CHECK_EQUAL(10, dealer.get_value());
	CHECK_EQUAL(true,dealer.decision());
	dealer.take_card(Card(Card::Colour(1), Card::Value(7)));
	CHECK_EQUAL(17, dealer.get_value());
	CHECK_EQUAL(false,dealer.decision());
}
}
