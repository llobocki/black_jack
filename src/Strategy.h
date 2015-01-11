/*
 * Strategy.h
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#ifndef STRATEGY_H_
#define STRATEGY_H_

#include "Box.h"

class Strategy {
public:

	virtual ~Strategy();

	virtual bool decission(const Box my_box, const int rival_value,
			const int card_counter)=0;
protected:
	Strategy();
};

#endif /* STRATEGY_H_ */
