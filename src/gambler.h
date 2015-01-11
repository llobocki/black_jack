//
//
//#include "vector"
//
//#include "player.h"
////#include "dealer.h"
//
//#include "basic_strategy.h"
//#include "hi_low_i.h"
//
//#ifndef GAMBLER_H
//#define GAMBLER_H
//
//
//
//class Gambler
//{
//private:
//    int bankroll;
//    std::vector<Player> fields;
//public:
//    Gambler();
//    void create_field(int i, const int bet);
//
//    int get_bankroll() const;
//    void set_bankroll(int i);
//
//
//
//    void loose(int bet);
//    void win(int bet);
//    void push();
//
//    void loose_no_print(int bet);
//    void win_no_print(int bet);
//    void push_no_print();
//
//    void reset();
//    void one_card_normal(std::vector< Card >& deck, int& counter);
//    void one_card_basic(std::vector< Card >& deck, int& counter);
//    void one_card_hi_low_I(std::vector<Card> &deck, int &counter, int & actual);
//
//
//    void print();
//
//    void get_black_jack();
//    int size();
//
//    bool check_black_jack();
//
//    void game_gambler_normal(std::vector< Card >& deck, const Dealer dealer, int& counter);
//    void game_gambler_basic(std::vector< Card >& deck, const Dealer dealer, int& counter, const int nr_decks);
//    void game_gambler_hi_low_I(std::vector< Card >& deck, const Dealer dealer, int& counter, int& actual, const int nr_decks);
//
//    bool too_many();
//
//    void result(const Dealer dealer);
//    void result_no_print(const Dealer dealer, int &hands);
//
//    void double_card(std::vector< Card >& deck, int& counter, const int i, bool& out, int& actual);
//
//
//};
//
//#endif // GAMBLER_H
