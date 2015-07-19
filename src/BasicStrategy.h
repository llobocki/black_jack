#ifndef BASICSTRATEGY_H_
#define BASICSTRATEGY_H_


#include "Strategy.h"
#include "Decision.h"


Decision tab_normal[16][10]
{
//    2		3	4	5	6	  7	    8		9	10	ace
   (card), (card), (card), (card), (card), (card), (card), (card), (card), (card), //5
   (card), (card), (card), (card), (card), (card), (card), (card), (card), (card), //6
   (card), (card), (card), (card), (card), (card), (card), (card), (card), (card),
   (card), (card), (card), (card), (card), (card), (card), (card), (card), (card),
   (card), (double_card), (double_card), (double_card), (double_card), (card), (card), (card), (card), (card), //9
   (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (card), (card),//10
   (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (card),
   (card), (card), (no_card), (no_card), (no_card), (card), (card), (card), (card), (card),//12
   (no_card), (no_card), (no_card), (no_card), (no_card), (card), (card), (card), (card), (card),
   (no_card), (no_card), (no_card), (no_card), (no_card), (card), (card), (card), (card), (card),
   (no_card), (no_card), (no_card), (no_card), (no_card), (card), (card), (card), (card), (card),//15
   (no_card), (no_card), (no_card), (no_card), (no_card), (card), (card), (card), (card), (card),//16
   (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card),//17
   (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card),
   (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card),
   (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card),//20
};


Decision tab_soft_ace[8][10]
{
   (card), (card), (card), (double_card), (double_card), (card), (card), (card), (card), (card),	//13
   (card), (card), (card), (double_card), (double_card), (card), (card), (card), (card), (card),
   (card), (card), (double_card), (double_card), (double_card), (card), (card), (card), (card), (card),//
   (card), (card), (double_card), (double_card), (double_card), (card), (card), (card), (card), (card),
   (card), (double_card), (double_card), (double_card), (double_card), (card), (card), (card), (card), (card),
   (no_card), (double_card), (double_card), (double_card), (double_card), (no_card), (no_card), (card), (card), (card),//18
   (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card),
   (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card),//20
};

Decision tab_split[10][10] {
   (split), (split), (split), (split), (split), (split), (split), (split), (split), (card), //a-a
   (split), (split), (split), (split), (split), (split), (card), (card), (card), (card),
   (split), (split), (split), (split), (split), (split), (card), (card), (card), (card),
   (card), (card), (card), (split), (split), (card), (card), (card), (card), (card),
   (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (double_card), (card), (card),	//10
   (split), (split), (split), (split), (split), (card), (card), (card), (card), (card),
   (split), (split), (split), (split), (split), (split), (card), (card), (card), (card),//14
   (split), (split), (split), (split), (split), (split), (split), (split), (split), (card),//16
   (split), (split), (split), (split), (split), (no_card), (split), (split), (no_card), (no_card),//18
   (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card), (no_card),//20
};



class BasicStrategy: public Strategy{
public:
  BasicStrategy();
  virtual ~BasicStrategy();

  virtual Decision decision(const Box my_box, const int rival_value=0,
				const int card_counter=0);};

#endif /* BASICSTRATEGY_H_ */
