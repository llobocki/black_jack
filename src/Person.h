/*
 * Person.h
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "Strategy.h"
#include "Deck.h"
#include "Decision.h"

class Person {
protected:
	Strategy* _strategy;
public:
	Person(Strategy* strategy);
	virtual ~Person();

//	virtual Box get_box() const =0;
	virtual int get_value() const =0;
	virtual void take_card(Card card)=0;
	virtual Decision decision(int rival_value=0) =0;
	virtual void play(Deck &deck) =0;
	virtual void reset()=0;
	virtual void one_card(Deck& deck)=0;
//	virtual std::stack<Card> get_card() =0;
};

#endif /* PERSON_H_ */
