/*
 * Take17.h
 *
 *  Created on: 11 sty 2015
 *      Author: lukasz
 */

#ifndef TAKE17_H_
#define TAKE17_H_

#include "Strategy.h"

//wzorzec Strategia

class Take_17 : public Strategy{
public:
	Take_17();
	virtual ~Take_17();

	virtual bool decission(const Box my_box, const int rival_value=0,
				const int card_counter=0);
};

#endif /* TAKE17_H_ */
