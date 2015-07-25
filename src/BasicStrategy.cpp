#include "BasicStrategy.h"
#include "Decision.h"

#include <iostream>
#include <array>

// std::array<std::array<Decision, 3>, 2> tab_normal {{{card, card, card},{card,card, card}}};

// std::cout << tab_normal[1][1] << '\n';
// Decision tab_normal[16][10]
std::array<std::array<Decision, 10>, 16> tab_normal
{{
//    2		3	4	5	6	  7	    8		9	10	ace
   {card, card, card, card, card, card, card, card, card, card}, //5
   {card, card, card, card, card, card, card, card, card, card}, //6
   {card, card, card, card, card, card, card, card, card, card},
   {card, card, card, card, card, card, card, card, card, card},
   {card, double_card, double_card, double_card, double_card, card, card, card, card, card}, //9
   {double_card, double_card, double_card, double_card, double_card, double_card, double_card, double_card, card, card},//10
   {double_card, double_card, double_card, double_card, double_card, double_card, double_card, double_card, double_card, card},
   {card, card, no_card, no_card, no_card, card, card, card, card, card},//12
   {no_card, no_card, no_card, no_card, no_card, card, card, card, card, card},
   {no_card, no_card, no_card, no_card, no_card, card, card, card, card, card},
   {no_card, no_card, no_card, no_card, no_card, card, card, card, card, card},//15
   {no_card, no_card, no_card, no_card, no_card, card, card, card, card, card},//16
   {no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card},//17
   {no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card},
   {no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card},
   {no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card},//20
}
};
//
//
// Decision tab_soft_ace[8][10]
std::array<std::array<Decision, 10>,8> tab_soft_ace
{{
  {card, card, card, double_card, double_card, card, card, card, card, card},	//13
  {card, card, card, double_card, double_card, card, card, card, card, card},
  {card, card, double_card, double_card, double_card, card, card, card, card, card},//
  {card, card, double_card, double_card, double_card, card, card, card, card, card},
  {card, double_card, double_card, double_card, double_card, card, card, card, card, card},
  {no_card, double_card, double_card, double_card, double_card, no_card, no_card, card, card, card},//18
  {no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card},
  {no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card},//20
}};
//
// Decision tab_split[10][10]
std::array<std::array<Decision, 10>, 10> tab_split
{  {
  {split, split, split, split, split, split, split, split, split, card}, //a-a
  {split, split, split, split, split, split, card, card, card, card},
  {split, split, split, split, split, split, card, card, card, card},
  {card, card, card, split, split, card, card, card, card, card},
  {double_card, double_card, double_card, double_card, double_card, double_card, double_card, double_card, card, card},	//10
  {split, split, split, split, split, card, card, card, card, card},
  {split, split, split, split, split, split, card, card, card, card},//14
  {split, split, split, split, split, split, split, split, split, card},//16
  {split, split, split, split, split, no_card, split, split, no_card, no_card},//18
  {no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card, no_card},//20
}};


BasicStrategy::BasicStrategy() :
  Strategy() {
}

BasicStrategy::~BasicStrategy(){

}

Decision BasicStrategy::decission(const Box my_box, const int rival_value, const int split_counter,
		const int card_counter) {
      if (my_box.can_split(split_counter) )
        return tab_split[my_box.get_value()/2 -1][rival_value-2];
      else
        return tab_normal[my_box.get_value()-5][rival_value-2];
    }
