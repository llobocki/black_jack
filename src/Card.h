#ifndef CARD_H
#define CARD_H

#include <tuple>

class Card
{
public:
    enum Colour {clubs = 1, diamonds, hearts, spades};
    enum Value {A = 1, J = 11, Q = 12, K = 13};
private:
    Colour colour;
    Value value;
public:
    Card(Colour c, Value v);
    Card();
    Card(const Card &c);
    bool operator==(const Card& c) const;
    bool operator!=(const Card& c) const;
    virtual ~Card();
    int get_value() const;
    int get_colour() const;
//    void print() const;
//
//    int cards_counter() const;
//
//    int get_num() const;

};

#endif // CARD_H
