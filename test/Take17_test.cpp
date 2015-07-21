#include "../src/Take17.h"
#include <unittest++/UnitTest++.h>

SUITE(Take17) {

TEST(decision) {
	Take_17 dec = Take_17();
	Box box = Box();
	//card
	box.card(Card(Card::Colour(1), Card::Value(10)));
	CHECK_EQUAL(true,dec.decission(box));
	//no card
	box.card(Card(Card::Colour(1), Card::Value(7)));
	CHECK_EQUAL(false,dec.decission(box));
}
}
