#include "Box.h"

#include "iostream"
Box::Box() {
  _bet = 0;
  _value = 0;
  _ace = false;
  _soft_ace = false;
  _split = false;
  // TODO Auto-generated constructor stub
}

Box::~Box() {
  // TODO Auto-generated destructor stub
}

int Box::card_value(int value) const { return value < 10 ? value : 10; }

int Box::get_bet() const { return _bet; }

int Box::get_value() const {
  if (soft_ace())
    return _value + 10;
  else
    return _value;
}

int Box::size_box() const { return _box.size(); }

bool Box::split() const { return _split; }

Box::Box(const int bet) {
  _bet = bet;
  _value = 0;
  _ace = false;
  _soft_ace = false;
  _split = false;
}

// dopisanie splita asów
Box::Box(const int bet, const Card card, const bool split) {
  _box.push(card);
  _bet = bet;
  _value = card_value(card.get_value());
  _ace = false;
  _soft_ace = false;
  _split = split;
}

void Box::card(const Card card, int bet) {
  if (bet > 0)
    _bet += bet;
  _box.push(card);
  if (soft_ace() == true && card_value(card.get_value()) + get_value() > 21) {
    _soft_ace = false;
  }

  if (card.get_value() == 1 && _soft_ace == false && _ace == false) {
    _ace = true;
    _soft_ace = true;
    _value += card_value(card.get_value());
  } else
    _value += card_value(card.get_value());
}

bool Box::black_jack() const {
  return _box.size() == 2 && _value == 11 && _ace == true ? true : false;
}

bool Box::can_split(int split_counter) const {
  return (split_counter < 3) &&
                 _value % card_value((_box.top()).get_value()) == 0
             ? true
             : false;
}

Card Box::split_card() {
  Card card = _box.top();
  _box.pop();
  _value /= 2;
  return card;
}

void Box::set_split() { _split = true; }

bool Box::soft_ace() const { return _soft_ace; }
