/*
 * Take17_test.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "../src/Take17.h"
#include <unittest++/UnitTest++.h>

SUITE(Take17) {
TEST(negative_Take17) {
	CHECK(false);
}

TEST(decission) {
	Take_17 dec = Take_17();
	Box box = Box();
	box.card(Card(Card::Colour(1), Card::Value(10)));
	CHECK(dec.decission(box, 10, 0));
	box.card(Card(Card::Colour(1), Card::Value(7)));
	CHECK(!dec.decission(box, 0, 0));
}
}
