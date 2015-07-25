#ifndef BOX_H_
#define BOX_H_

#include <stack>
#include "Card.h"

class Box {
private:
	std::stack<Card> _box;
	int _bet;
	int _value;
	bool _ace;
	bool _split;

public:
	Box();
	Box(const int bet);
	Box(const int bet, const Card card, const bool split);

	virtual ~Box();

	void card(const Card card, int bet=0);

	int get_bet() const;
	int get_value() const;
	int size_box() const;
	bool black_jack() const;
	bool split() const;
	bool can_split(int split_counter) const;
	void set_split();
	Card split_card();
private:
	int card_value(int value) const;
};

#endif /* BOX_H_ */
