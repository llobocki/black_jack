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
				_deck.push(card);
				_shuffled_vector.push_back(card);
			}
}

/*
 * na razie podstawowa implementacja, podobno w c++11 można to zrobić inaczej
 *
 * https://stackoverflow.com/questions/6926433/how-to-shuffle-a-stdvector-in-c
 */
void Deck::shuffle() {
	    srand(time(0));
	    std::random_shuffle(_shuffled_vector.begin(),_shuffled_vector.end());
	    std::stack<Card> temp_deck;
	    for (unsigned int i = 0; i < _shuffled_vector.size(); ++i)
	    	temp_deck.push(_shuffled_vector[i]);
	    _deck = temp_deck;
}

Deck::Deck() {
	Card card = Card();
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {
			card = Card(Card::Colour(i), Card::Value(j));
			_deck.push(card);
			_shuffled_vector.push_back(card);
		}
}

Deck::~Deck() {
}


Card Deck::get_card() {
	Card card = _deck.top();
	_deck.pop();
	return card;
}

Deck::Deck(std::stack<Card> cards) {
	_deck = cards;
}

int Deck::size() const {
	return _deck.size();
}

bool Deck::empty() const {
	return _deck.empty();
}


