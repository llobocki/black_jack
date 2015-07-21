#include "Person.h"


Person::~Person() {
	// TODO Auto-generated destructor stub
}

Person::Person(Strategy* strategy) :
		_strategy(strategy) {
}
