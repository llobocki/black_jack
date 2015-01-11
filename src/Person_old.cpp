//#include "person.h"
//#include "iostream"
//
//void use_soft_ace(bool &soft_ace, int &cards) {
//	if (soft_ace == false && cards < 12) {
//		cards += 10;
//		soft_ace = true;
//	};
//}
//
//void use_ace(bool &soft_ace, int &cards) {
//	if (soft_ace == true && cards > 21) {
//		soft_ace = false;
//		cards -= 10;
//	}
//}
//
//Person::Person() {
//	value = 0;
//
//	split = 0;
//	black_jack = false;
//	soft_ace = false;
//
////     card_counter = 0;
//}
//
//Person::~Person() {
//
//}
//
//int Person::get_cards() const {
//	return value;
//}
//
//bool Person::get_black_jack() const {
//	return black_jack;
//
//}
//
//void Person::reset() {
//	cards.clear();
//	value = 0;
////     two_cards = 0;
//	split = 0;
//	soft_ace = false;
//	black_jack = false;
//}
//
//void Person::add(const Card card) {
////    card.print(); // tylko do gry, nie do symulacji, trzeba to inaczej zaplanować
//
////     actual += card.cards_counter();
//
//	cards.push_back(card);
//
//	value += card.get_value();
//
//	if (cards.size() == 2 && value == 21 && split == 0) {
//		black_jack = true;
//		soft_ace = false;
//	}
//
//	else if (card.get_value() == 1)
//		use_soft_ace(soft_ace, value); 		//test
//
//	use_ace(soft_ace, value);
//}
//
//// void Person::add_no_print(const Card card)
//// {
////     cards.push_back(card);
////
////     value += card.get_value();
////     if (card.get_value() == 1) use_soft_ace(soft_ace,value); 		//test
////
////
////     if (cards.size() == 2 && value == 21 && split == 0)
////     {
////         black_jack = true;
////     }
////
////
////     use_ace(soft_ace,value);
//// }
//
//void Person::add_basic(const Card card) {
//	cards.push_back(card);
//
//	value += card.get_value();
//	if (card.get_value() == 1)
//		use_soft_ace(soft_ace, value); 		//test
//
//	if (cards.size() == 2 && value == 21 && split == 0) {
//		black_jack = true;
//	}
//
//	use_ace(soft_ace, value);
//}
//
//void Person::add_hi_low_I(const Card card, int& actual) {
//	actual += card.cards_counter();
//
//	cards.push_back(card);
//
//	value += card.get_value();
//	if (card.get_value() == 1)
//		use_soft_ace(soft_ace, value); 		//test
//
//	if (cards.size() == 2 && value == 21 && split == 0) {
//		black_jack = true;
//	}
//
//	use_ace(soft_ace, value);
//
//}
//
//void Person::print() {
//	if (value < 22)
//		std::cout << value << '\n';
//	else
//		std::cout << "za dużo\n";
//
//}
//
//bool Person::can_split() {
//	return (cards.size() == 2 && (cards[0].get_value() == cards[1].get_value())
//			&& split < 4) ? true : false;
//}
//
//int Person::get_size() const {
//	return cards.size();
//}
//
//int Person::get_split() const {
//	return split;
//}
//
//void Person::set_split() {
//	split++;
//}
//
//Card Person::back_card() {
//	Card c = cards.back();
//	value -= c.get_value();
//	cards.pop_back();
//	return c;
//}
//
//bool Person::split_aces() {
//	return (cards[0].get_value() == 1 && cards[1].get_value() == 1 && split == 0 && cards.size() == 2) ?
//			true : false;
//}
//
//void Person::only_21() {
//	black_jack = false;
//}
//
//bool Person::ace_soft() const {
//	return soft_ace;
//}
