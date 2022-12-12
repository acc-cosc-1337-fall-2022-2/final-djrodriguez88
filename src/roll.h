//
#include "die.h"


class Roll{
public:
    Roll(Die& dice1, Die& dice2)

    void roll_die();
    int roll_value() const;


private:
    Die& dice1, dice2;
    bool rolled = false;
    int value;
};