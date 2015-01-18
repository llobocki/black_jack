/*
 * Player_test.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "../src/Player.h"
#include <unittest++/UnitTest++.h>

#include "../src/Take17.h"

SUITE(Player) {
TEST(negative_Player) {
	CHECK(false);
}
//TEST(Player){
//	Strategy* take_17 = new Take_17();
//	Player player = Player(take_17);
//	player.take_card(Card(Card::Colour(1), Card::Value(10)));
//	CHECK_EQUAL(10, player.get_value());
//	CHECK_EQUAL(true,player.decision());
//	player.take_card(Card(Card::Colour(1), Card::Value(7)));
//	CHECK_EQUAL(17, player.get_value());
//	CHECK_EQUAL(false,player.decision());
//}
}
