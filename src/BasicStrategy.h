#ifndef BASICSTRATEGY_H_
#define BASICSTRATEGY_H_

#include "Strategy.h"
#include "Decision.h"


class BasicStrategy : public Strategy{
public:
  BasicStrategy();
  virtual ~BasicStrategy();

  virtual Decision decission(const Box my_box, const int rival_value=0, const int split_counter=0,
				const int card_counter=0);
};

#endif /* BASICSTRATEGY_H_ */
