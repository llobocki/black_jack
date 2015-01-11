#include "Deck.h"
#include <random>
#include <time.h>
#include <algorithm>

Deck::Deck(int size) {
	Card card = Card();
	for (int i = 0; i < size; ++i)
		for (int i = 1; i < 5; ++i)
			for (int j = 1; j < 14; ++j) {
				card = Card(Card::Colour(i), Card::Value(j));
				deck.push(card);
				shuffled_vector.push_back(card);
			}
}

/*
 * na razie podstawowa implementacja, podobno w c++11 można to zrobić inaczej
 *
 * https://stackoverflow.com/questions/6926433/how-to-shuffle-a-stdvector-in-c
 */
void Deck::shuffle() {
	    srand(time(0));
	    std::random_shuffle(shuffled_vector.begin(),shuffled_vector.end());
	    std::stack<Card> temp_deck;
	    for (unsigned int i = 0; i < shuffled_vector.size(); ++i)
	    	temp_deck.push(shuffled_vector[i]);
	    deck = temp_deck;
}

Deck::Deck() {
	Card card = Card();
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {
			card = Card(Card::Colour(i), Card::Value(j));
			deck.push(card);
			shuffled_vector.push_back(card);
		}
}

Deck::~Deck() {
}


Card Deck::get_card() {
	Card card = deck.top();
	deck.pop();
	return card;
}

int Deck::size() const {
	return deck.size();
}

bool Deck::empty() const {
	return deck.empty();
}


