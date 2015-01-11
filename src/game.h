

#ifndef GAME_H
#define GAME_H

#include "vector"
#include "iostream"
#include "algorithm"
#include "ctime"
#include "cstdlib"

#include "Card.h"
#include "dealer.h"
#include "player.h"
#include "gambler.h"

class Game
{
};


void game(std::vector<Card> &deck, Dealer &dealer, Gambler &gambler);

#endif // GAME_H
