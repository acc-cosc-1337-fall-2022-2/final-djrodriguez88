//
#include "roll.h"

Roll::Roll(Die& Dice1, Die& Dice2)//: dice1(Dice1), dice2(Dice2)}


void Roll::roll_die()
{
    dice1.roll();
    dice2.roll();
    value = dice1.rolled_value() + dice2.rolled_value();
    rolled = true;

int Roll::roll_value() const{return value;}

}
