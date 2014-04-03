#ifndef CARD_H
#define CARD_H

class Card
{
public:
    enum Color {clubs = 1, diamonds, hearts, spades};
    enum Value {A = 1, J = 11, Q = 12, K = 13};
private:
    Color color;
    Value value;
public:
    Card(Color c, Value v);
    Card();
    Card(const Card &c);
    int get_value() const;
    int get_colour() const;
    void print() const;

    int cards_counter() const;

    int get_num() const;
};

#endif // CARD_H
