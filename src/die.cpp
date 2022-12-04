//
#include "die.h"
#include <cstdlib>


void Die::roll()
{
    roll_value =  rand() % sides.size();
    roll_value = roll_value+1;
}

int Die::rolled_value() const{return roll_value;}
