/*
 * person_test.cpp
 *
 *  Created on: 3 kwi 2014
 *      Author: lukasz
 */

#include "person.h"
#include "card.h"

#include <unittest++/UnitTest++.h>

SUITE(Person) {
TEST(negative) {
	CHECK(false);
}
//test konstruktora Person
TEST(Person) {
	Person *p = new Person();
	CHECK(p != nullptr);

	CHECK_EQUAL(0, p->get_cards());
	CHECK_EQUAL(0, p->get_split());
	CHECK_EQUAL(false, p->get_black_jack());
	CHECK_EQUAL(false, p->ace_soft());
	CHECK_EQUAL(0, p->get_size());
}
//dodanie jednej karty
TEST(one_Card) {
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {
			Person p = Person();
			Card c = Card(Card::Color(i), Card::Value(j));

			p.add(c);

			CHECK_EQUAL([](int x) {return x == 1 ? 11 : x;}(c.get_value()),
					p.get_cards());
			CHECK_EQUAL(0, p.get_split());
			CHECK_EQUAL(false, p.get_black_jack());
			CHECK_EQUAL(
					[](int x) {return x == 1 ? true : false;}(
							c.get_value()), p.ace_soft());
			CHECK_EQUAL(1, p.get_size());

		}

}
//dodanie jednej karty + reset
TEST(one_Card_reset) {
	Person p = Person();
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {

			Card c = Card(Card::Color(i), Card::Value(j));

			p.add(c);

			CHECK_EQUAL([](int x) {return x == 1 ? 11 : x;}(c.get_value()),
					p.get_cards());
//			CHECK_EQUAL(c.get_value(),
//					p.get_cards());
			CHECK_EQUAL(0, p.get_split());
			CHECK_EQUAL(false, p.get_black_jack());
			CHECK_EQUAL(
					[](int x) {return x == 1 ? true : false;}(
							c.get_value()), p.ace_soft());
			CHECK_EQUAL(1, p.get_size());

			p.reset();

		}

}
//dodanie dwóch takich samych kart
TEST(two_Card_reset) {
	Person p = Person();
//	for (int i = 1; k < )
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {

			Card c = Card(Card::Color(i), Card::Value(j));

			p.add(c);
			p.add(c);

			CHECK_EQUAL([](int x) {return x == 1 ? 12 : x*2;}(c.get_value()),
					p.get_cards());
			CHECK_EQUAL(0, p.get_split());
			CHECK_EQUAL(false, p.get_black_jack());
			CHECK_EQUAL(
					[](int x) {return x == 1 ? true : false;}(
							c.get_value()), p.ace_soft());
			CHECK_EQUAL(2, p.get_size());

			p.reset();

		}

}
//dodanie karty + asa
TEST(ace_Card) {
	Person p = Person();
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {

			Card c = Card(Card::Color(1), Card::Value(1));
			p.add(c);

			c = Card(Card::Color(i), Card::Value(j));
			p.add(c);

			CHECK_EQUAL([](int x) {return x == 1 ? 12 : x+11;}(c.get_value()),
					p.get_cards());
			CHECK_EQUAL(0, p.get_split());
			CHECK_EQUAL([](int x) {return x == 10 ? true : false;}(c.get_value()),
					p.get_black_jack());
			CHECK_EQUAL(
					[](int x) {return x == 10 ? false : true;}(
							c.get_value()), p.ace_soft());
			CHECK_EQUAL(2, p.get_size());

			p.reset();

		}

}

}
