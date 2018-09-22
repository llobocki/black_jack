#ifndef CARDCOUNTER_H_
#define CARDCOUNTER_H_

class CardCounter {
public:
  virtual ~CardCounter();

  virtual int card_counter(const int card_value) = 0;

protected:
  CardCounter();
};
#endif
