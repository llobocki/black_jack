#include "Deck.h"

Deck::Deck(int size) {
	Card card = Card();
	for (int i = 0; i < size; ++i)
		for (int i = 1; i < 5; ++i)
			for (int j = 1; j < 14; ++j) {
				card = Card(Card::Color(i), Card::Value(j));
				deck.push(card);
			}
}

void Deck::shuffle() {
}

Deck::Deck() {
	Card card = Card();
	for (int i = 1; i < 5; ++i)
		for (int j = 1; j < 14; ++j) {
			card = Card(Card::Color(i), Card::Value(j));
			deck.push(card);
		}
}

Deck::~Deck() {
}

int Deck::get_colour() const {
}

Card Deck::get_card() {
	Card card = deck.top();
	deck.pop();
	return card;
}

int Deck::get_size() const {
	return deck.size();
}

int Deck::get_value() const {
}

