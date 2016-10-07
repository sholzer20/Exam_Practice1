#include "Dice.h"
#include <cstdlib>
#include <ctime>

Dice::Dice(int Sides) //Constructs the Dice object with sides and creates a random seed
{
	sides = Sides;
	srand(time(0));
}

int Dice::Roll() //First adds one to the number of rolls and then outputs a random number from 1-sides
{
	numbRolls++;
	return (rand() % sides + 1);
}

int Dice::GetRolls() //Returns the member variable numbRolls
{
	return numbRolls;
}

int Dice::GetSides() //Returns the member variable sides
{
	return sides;
}
