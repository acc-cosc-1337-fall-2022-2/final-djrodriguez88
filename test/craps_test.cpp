#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "die.h"
#include "roll.h"
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

 
TEST_CASE("Verify dice rolls")
{
    srand (time(NULL));
    Die dice;
    for(int i = 0; i < 10; i++)
    {
        dice.roll();
        int diceRoll = dice.rolled_value();
        cout<< diceRoll;
        REQUIRE(diceRoll < 7);
        REQUIRE(diceRoll > 0);
    }
}


TEST_CASE("Test dice rolls")
{
    Die dice1, dice2;
    Roll roll(dice1, dice2);

    roll.roll_die();
    roll.rollvalue();

}