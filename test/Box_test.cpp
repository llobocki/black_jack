#include "../src/Box.h"

#include <unittest++/UnitTest++.h>
#include <iostream>
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
		for (int j = 2; j < 14; ++j) {
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
	for (int j = 2; j < 14; ++j) {
		Card c = Card(Card::Colour(1), Card::Value(j));
		Box box = Box(10);
		box.card(c);
		box.card(c);
		CHECK_EQUAL(10, box.get_bet());
		CHECK_EQUAL([](Card c) {return c.get_value() < 10 ? c.get_value(): 10;
		}(c) * 2, box.get_value());
		CHECK_EQUAL(2, box.size_box());
	}

}
TEST(black_jack) {
	Card first = Card(Card::Colour(1), Card::Value(1));
	for (int i = 1; i < 14; ++i) {
		Card second = Card(Card::Colour(1), Card::Value(i));
		Box box = Box();
		box.card(first);
		box.card(second);
		CHECK_EQUAL(
				[](Card c) {return c.get_value() < 10 ? c.get_value(): 10;}(
						second)+11, box.get_value());
		CHECK_EQUAL([](Card c) {return c.get_value() < 10 ? false: true;}(
						second),box.black_jack());
	}
}

TEST(split) {
	for (int i = 2; i < 14; ++i) {
		Card first = Card(Card::Colour(1), Card::Value(i));
		Box box = Box();
		box.card(first);
		box.card(first);
		CHECK_EQUAL(
				[](Card c) {return c.get_value() < 10 ? c.get_value(): 10;}(
						first)*2, box.get_value());
		CHECK_EQUAL(true, box.can_split(0));
		// CHECK_EQUAL([](Card c) {return c.get_value() < 10 ? false: true;}(
		// 				second),box.black_jack());
		first = box.split_card();
		box.set_split();
		CHECK_EQUAL(
						[](Card c) {return c.get_value() < 10 ? c.get_value(): 10;}(
								first), box.get_value());
		CHECK_EQUAL(1, box.size_box());
		CHECK_EQUAL(true, box.split());
	}
}

TEST(soft_ace){
	Box box = Box();
	Card first = Card(Card::Colour(1), Card::Value(1));
	box.card(first);
	CHECK_EQUAL(11, box.get_value());
	CHECK_EQUAL(true, box.soft_ace());

	Card second = Card(Card::Colour(1), Card::Value(1));
	box.card(second);
	CHECK_EQUAL(12, box.get_value());
	CHECK_EQUAL(true, box.soft_ace());


	Card third = Card(Card::Colour(1), Card::Value(10));
	box.card(third);
	CHECK_EQUAL(12, box.get_value());
	CHECK_EQUAL(false, box.soft_ace());

	Card fourth = Card(Card::Colour(1), Card::Value(9));
	box.card(fourth);
	CHECK_EQUAL(21, box.get_value());
	CHECK_EQUAL(false, box.soft_ace());


}
}
