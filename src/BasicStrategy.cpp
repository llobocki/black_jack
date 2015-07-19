#include "BasicStrategy.h"
#include "Decision.h"

BasicStrategy::BasicStrategy() :
  Strategy() {
}

BasicStrategy::~BasicStrategy(){

}

Decision BasicStrategy::decision(const Box my_box, const int rival_value,
		const int card_counter) {
      return Decision::no_card;
    }
