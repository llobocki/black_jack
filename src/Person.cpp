/*
 * Person.cpp
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#include "Person.h"


Person::~Person() {
	// TODO Auto-generated destructor stub
}

Person::Person(Strategy* strategy) :
		_strategy(strategy) {
}
