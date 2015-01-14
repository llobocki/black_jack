/*
 * Person.h
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "Strategy.h"

class Person {
private:
	Strategy* _strategy;
public:
	Person(Strategy* strategy);
	virtual ~Person();

	virtual Box get_box() const =0;
	virtual int get_value() const =0;
//	virtual std::stack<Card> get_card() =0;
};

#endif /* PERSON_H_ */
