#include "die.h"


int main()
{
    srand (time(NULL));

    Die dice;
    for(int i = 0; i < 10; i++)
    {
        dice.roll();
        int diceRoll = dice.rolled_value();
        cout<< diceRoll;
       // REQUIRE(diceRoll < 7);
       // REQUIRE(diceRoll > 0);
    }
	return 0;
}