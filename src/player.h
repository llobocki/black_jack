
#include "card.h"
// #include "option.h"
#include "person.h"

#ifndef PLAYER_H
#define PLAYER_H



class Player : public Person
{
private:
    int bet;
public:
    Player();
    Player(int b);


    int get_bet() const;
    void double_bet();


    void print();
};

#endif // PLAYER_H
