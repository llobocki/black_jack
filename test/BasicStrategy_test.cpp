#include "../src/BasicStrategy.h"
#include "../src/Box.h"
#include "../src/Take17.h"
#include <unittest++/UnitTest++.h>
#include "../src/Decision.h"
#include <iostream>
//#include "../src/Card.h"

SUITE(BasicStrategy) {

  TEST(BasicStrategyTabNormalStand) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(10));
    Card card_2 = Card(Card::Colour(1), Card::Value(10));
    box.card(card_1);
    box.card(card_2);

    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::no_card, basic_strategy->decission(box, 10));
  }

  TEST(BasicStrategyTabNormalCard) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(2));
    Card card_2 = Card(Card::Colour(1), Card::Value(3));
    box.card(card_1);
    box.card(card_2);

    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::card, basic_strategy->decission(box, 10));
  }

  TEST(BasicStrategyTabNormalDouble) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(5));
    Card card_2 = Card(Card::Colour(1), Card::Value(5));
    box.card(card_1);
    box.card(card_2);

    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::double_card, basic_strategy->decission(box, 2));
  }

  TEST(BasicStrategyTabSplitStand) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(9));
    Card card_2 = Card(Card::Colour(1), Card::Value(9));
    box.card(card_1);
    box.card(card_2);

    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::no_card, basic_strategy->decission(box, 10));
  }

  TEST(BasicStrategyTabSplitCard) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(7));
    Card card_2 = Card(Card::Colour(1), Card::Value(7));
    box.card(card_1);
    box.card(card_2);

    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::card, basic_strategy->decission(box, 10));
  }

  TEST(BasicStrategyTabSplitDouble) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(5));
    Card card_2 = Card(Card::Colour(1), Card::Value(5));
    box.card(card_1);
    box.card(card_2);

    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::double_card, basic_strategy->decission(box, 2));
  }

  TEST(BasicStrategyTabSplitSplit) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(9));
    Card card_2 = Card(Card::Colour(1), Card::Value(9));
    box.card(card_1);
    box.card(card_2);

    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::split, basic_strategy->decission(box, 8));
  }

  TEST(BasicSTrategy_surrender) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(10));
    Card card_2 = Card(Card::Colour(1), Card::Value(6));
    box.card(card_1);
    box.card(card_2);
    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::surrender,
                basic_strategy->decission(box, 10, 0, 0, true));
  }

  TEST(BasicSTrategy_no_surrender) {
    Box box = Box(10);
    Card card_1 = Card(Card::Colour(1), Card::Value(10));
    Card card_2 = Card(Card::Colour(1), Card::Value(6));
    box.card(card_1);
    box.card(card_2);
    Strategy *basic_strategy = new BasicStrategy();
    CHECK_EQUAL(Decision::card, basic_strategy->decission(box, 10));
  }
}
