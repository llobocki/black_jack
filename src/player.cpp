

#include "player.h"
#include "iostream"

Player::Player() :Person()
{
    bet = 10;
}


Player::Player(int b) :Person()
{
    bet = b;
}

void Player::print()
{

    std::cout << "\t\t\tgracz: ";
    Person::print();


}


int Player::get_bet() const
{
    return bet;
}

void Player::double_bet()
{
    bet *= 2;
}

