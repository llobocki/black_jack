#include "Player.h"
#include "iostream"
#include "Decision.h"

Player::Player(Strategy *strategy, int number_of_boxes, int bet)
    : Person(strategy) {
  _bankroll = 0;
  _number_of_boxes = number_of_boxes;
  _bet = bet;
  _split_counter = 0;
  //	_counter = 0;
}

Player::~Player() {
  // TODO Auto-generated destructor stub
}

int Player::get_value() const { return 0; }

void Player::take_card(Card card) {}

Decision Player::decision(int rival_value) {
  return Decision::card;
  //	return _strategy->decission(_box, rival_value);
}

int Player::get_size() const { return _boxes.size(); }

void Player::init_boxes() {
  for (int i = 0; i < _number_of_boxes; ++i) {
    _boxes.push_back(Box(_bet));
    _bankroll -= _bet;
    _split_counter = 0;
  }
}

void Player::one_card(Deck &deck) {
  for (auto &box : _boxes) {
    box.card(deck.get_card());
  }
}

void Player::reset() {
  _boxes.clear();
  _split_counter = 0;
}

void Player::play(Deck &deck, int rival_value) {
  auto box = _boxes.begin();
  while (box != _boxes.end()) {
    if (!(*box).black_jack()) {
      if ((*box).split()) {
        _split_counter++;
        (*box).card(deck.get_card());
      } else {
        _split_counter = 0;
      }
      Decision decision =
          _strategy->decission(*box, rival_value, _split_counter);

      while ((*box).get_value() < 21 && decision != Decision::no_card) {
        if (decision == Decision::double_card) {
          int bet = (*box).get_bet();
          _bankroll -= bet;
          (*box).card(deck.get_card(), bet);
          decision = Decision::no_card;
        } else {
          if (decision == Decision::card) {
            (*box).card(deck.get_card());

          } else if (decision == Decision::split) {
            int bet = (*box).get_bet();
            _bankroll -= bet;
            _split_counter++;
            Card card = (*box).split_card();
            if (card.get_value() == 1) {
              _boxes.insert(box, Box(bet, card, true));
              --box;
              (*box).card(deck.get_card());
              ++box;
              (*box).card(deck.get_card());
              decision = Decision(0);
              _split_counter = 0;
            } else {

              _boxes.insert(box, Box(bet, card, true));
              --box;
              (*box).card(deck.get_card());
            }
          }
          if (decision != Decision::no_card)
            decision = _strategy->decission(*box, rival_value, _split_counter);
        }
      }
      if ((*box).get_value() < 22)
        ++box;
      else
        box = _boxes.erase(box);
    } else {
      ++box;
    }
  }
  //	for (auto& box : _boxes) {
  //		while (_strategy->decission(box))
  //			box.card(deck.get_card());
  //	}
}

void Player::surrender(int rival_value) {
  if (rival_value != 11) {
    auto box = _boxes.begin();
    while (box != _boxes.end()) {
      if (!(*box).black_jack()) {
        Decision decision =
            _strategy->decission(*box, rival_value, _split_counter, 0, true);
        if (decision == Decision::surrender) {
          _bankroll += (*box).get_bet() / 2;
          box = _boxes.erase(box);
        } else
          ++box;
      } else
        ++box;
    }
  }
}

int Player::get_bankroll() const { return _bankroll; }

void Player::scores(int dealer_value, bool dealer_black_jack) {
  for (auto &box : _boxes) {
    if (box.black_jack() && dealer_black_jack)
      _bankroll += box.get_bet();
    else if (box.black_jack())
      _bankroll += box.get_bet() + box.get_bet() * 3 / 2;
    else if (!box.black_jack() && dealer_black_jack) {
    } else if (dealer_value > 21 || box.get_value() > dealer_value)
      _bankroll += box.get_bet() * 2;
    else if (box.get_value() == dealer_value)
      _bankroll += box.get_bet();
  }
}

void Player::print_boxes() {
  for (auto &box : _boxes) {
    printf("%i\n", box.get_value());
  }
}
