/*
 * Game_test.cpp
 *
 *  Created on: 22 mar 2015
 *      Author: lukasz
 */

#include <unittest++/UnitTest++.h>
#include "../src/Game.h"
#include "../src/Take17.h"
SUITE(Game) {
TEST(game) {
	Strategy* str_dealer = new Take_17();
	Strategy* str_player = new Take_17();
	Game game = Game(6, 100, 0.67, str_dealer, str_player, 1, 10);
	game.play();
}
}
