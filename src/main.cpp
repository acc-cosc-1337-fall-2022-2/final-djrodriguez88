#include "die.h"


int main()
{

    Die dice;
    for(int i = 0; i < 10; i++)
    {
        dice.roll();
        int diceRoll = dice.rolled_value();
        diceRoll = diceRoll+1;
        cout<< diceRoll;
       // REQUIRE(diceRoll < 7);
       // REQUIRE(diceRoll > 0);
    }
	return 0;
}