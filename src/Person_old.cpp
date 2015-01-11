//#include "Person_old.h"
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
//Person_old::Person_old() {
//	value = 0;
//
//	split = 0;
//	black_jack = false;
//	soft_ace = false;
//
////     card_counter = 0;
//}
//
//Person_old::~Person_old() {
//
//}
//
//int Person_old::get_cards() const {
//	return value;
//}
//
//bool Person_old::get_black_jack() const {
//	return black_jack;
//
//}
//
//void Person_old::reset() {
//	cards.clear();
//	value = 0;
////     two_cards = 0;
//	split = 0;
//	soft_ace = false;
//	black_jack = false;
//}
//
//void Person_old::add(const Card card) {
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
//// void Person_old::add_no_print(const Card card)
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
//void Person_old::add_basic(const Card card) {
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
//void Person_old::add_hi_low_I(const Card card, int& actual) {
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
//void Person_old::print() {
//	if (value < 22)
//		std::cout << value << '\n';
//	else
//		std::cout << "za dużo\n";
//
//}
//
//bool Person_old::can_split() {
//	return (cards.size() == 2 && (cards[0].get_value() == cards[1].get_value())
//			&& split < 4) ? true : false;
//}
//
//int Person_old::get_size() const {
//	return cards.size();
//}
//
//int Person_old::get_split() const {
//	return split;
//}
//
//void Person_old::set_split() {
//	split++;
//}
//
//Card Person_old::back_card() {
//	Card c = cards.back();
//	value -= c.get_value();
//	cards.pop_back();
//	return c;
//}
//
//bool Person_old::split_aces() {
//	return (cards[0].get_value() == 1 && cards[1].get_value() == 1 && split == 0 && cards.size() == 2) ?
//			true : false;
//}
//
//void Person_old::only_21() {
//	black_jack = false;
//}
//
//bool Person_old::ace_soft() const {
//	return soft_ace;
//}
