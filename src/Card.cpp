#include <iostream>
#include "Card.h"

Card::Card(Card::Colour c, Card::Value v) {
	colour = c;
	value = v;
}

Card::Card() {
	colour = clubs;
	value = A;
}

Card::Card(const Card& c) {
	colour = c.colour;
	value = c.value;
}

int Card::get_value() const {
	return value;
//	return (value < 11) ? value : 10;
}

bool Card::operator !=(const Card& c) const {
	return (colour != c.colour || value != c.value);
}

int Card::get_colour() const {
	return colour;
}

Card::~Card() {
}

bool Card::operator ==(const Card& c) const {
	return (colour == c.colour && value == c.value);
}
//void Card::print() const {
//	std::cout << "karta: ";
//	if (colour == clubs)
//		std::cout << "clubs ";
//	else if (colour == diamonds)
//		std::cout << "diamonds ";
//	else if (colour == hearts)
//		std::cout << "hearts ";
//	else
//		std::cout << "spades ";
//
//	if (value == A)
//		std::cout << "A\n";
//	else if (value == J)
//		std::cout << "J\n";
//	else if (value == Q)
//		std::cout << "Q\n";
//	else if (value == K)
//		std::cout << "K\n";
//	else
//		std::cout << value << '\n';
//}

//int Card::cards_counter() const {
//	if (value > 1 && value < 7)
//		return 1;
//	else if (value > 6 && value < 10)
//		return 0;
//	else
//		return -1;
//}
//
//int Card::get_num() const {
//	return value;
//}

