#ifndef STRATEGY_H_
#define STRATEGY_H_

#include "Box.h"
#include "Decision.h"

class Strategy {
public:

	virtual ~Strategy();

	virtual Decision decission(const Box my_box, const int rival_value=0,
			const int card_counter=0)=0;
protected:
	Strategy();
};

#endif /* STRATEGY_H_ */
