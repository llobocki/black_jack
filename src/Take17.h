#ifndef TAKE17_H_
#define TAKE17_H_

#include "Strategy.h"
#include "Decision.h"

// wzorzec Strategia

class Take_17 : public Strategy {
public:
  Take_17();
  virtual ~Take_17();

  virtual Decision decission(const Box my_box, const int rival_value = 0,
                             const int split_counter = 0,
                             const int card_counter = 0,
                             const bool surrender_card = false);
};

#endif /* TAKE17_H_ */
