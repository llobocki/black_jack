#include <iostream>
#include "Card.h"

Card::Card(Card::Color c, Card::Value v) {
	color = c;
	value = v;
}

Card::Card() {
	color = clubs;
	value = A;
}

Card::Card(const Card& c) {
	color = c.color;
	value = c.value;
}

int Card::get_value() const {
	return value;
//	return (value < 11) ? value : 10;
}

int Card::get_colour() const {
	return color;
}

Card::~Card() {
}
//void Card::print() const {
//	std::cout << "karta: ";
//	if (color == clubs)
//		std::cout << "clubs ";
//	else if (color == diamonds)
//		std::cout << "diamonds ";
//	else if (color == hearts)
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

