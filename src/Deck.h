#ifndef DECK_H_
#define DECK_H_

#include <stack>
#include <vector>
#include "Card.h"

class Deck {
private:
	std::stack<Card> _deck;
	std::vector<Card> _shuffled_vector;
public:
	Deck();
	Deck(int size);
	Deck(std::stack<Card> cards);
	virtual ~Deck();

	void shuffle();

	Card get_card();
	bool empty() const;
	int size() const;


};

#endif /* DECK_H_ */
