#ifndef PERSON_H
#define PERSON_H

#include "card.h"
#include "vector"

class Person {
private:
	std::vector<Card> cards;
	int value;

	int split;

	bool black_jack;
	bool soft_ace;

//     int card_counter;

public:
	Person();
	virtual ~Person();

	int get_cards() const;
	bool get_black_jack() const;

	void only_21();

	void reset();

	void add(const Card card);
	void add_no_print(const Card card);
	void add_basic(const Card card);
	void add_hi_low_I(const Card card, int &actual);

	virtual void print();

	bool can_split();
	int get_split() const;

	bool split_aces();

	bool ace_soft() const;

	void set_split();
	Card back_card();

	int get_size() const;

};

#endif // PERSON_H
