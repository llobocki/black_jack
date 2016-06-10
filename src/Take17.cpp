#include "Take17.h"
#include "Decision.h"

Take_17::Take_17() : Strategy() {}

Take_17::~Take_17() {}

Decision Take_17::decission(const Box my_box, const int rival_value,
                            const int split_counter, const int card_counter,
                            const bool surrender_card) {
  return my_box.get_value() < 17 ? Decision::card : Decision::no_card;
}
