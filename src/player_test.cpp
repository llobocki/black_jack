/*
 * player_test.cpp
 *
 *  Created on: 5 kwi 2014
 *      Author: lukasz
 */

#include "player.h"

#include <unittest++/UnitTest++.h>

SUITE(Player) {
TEST(negative) {
	CHECK(false);
}

TEST(Player){
	Player p = Player();
	CHECK_EQUAL(10,p.get_bet());
	p.double_bet();
	CHECK_EQUAL(20,p.get_bet());

	p = Player(0);
	CHECK_EQUAL(0,p.get_bet());
	p.double_bet();
	CHECK_EQUAL(0,p.get_bet());


}


}

