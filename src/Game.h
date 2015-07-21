#ifndef GAME_H_
#define GAME_H_

#include "Strategy.h"
#include "Dealer.h"
#include "Player.h"
#include "Deck.h"

class Game {
private:
	int _number_of_decks;
	int _number_of_games;
	double _cut_deck;
	Dealer _dealer;
	Player _player;
	Deck _deck;

	bool end_of_deck(int deck_size);
public:
	Game(int number_of_decks, int number_of_games, double cut_deck, Strategy *dealer_strategy,
			Strategy *player_strategy, int number_of_boxes, int bet);
	virtual ~Game();

	void play();
};

#endif /* GAME_H_ */
