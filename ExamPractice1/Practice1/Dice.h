#pragma once
//This header file outlines a class called Dice to simulate a die when an object is created

class Dice {
private:
	int sides;
	int numbRolls = 0;
public:
	Dice(int Sides); //This constructor accepts an int for the number of sides on the die and constructs the random seed using srand()

	int Roll(); //Random number between 1 and the number of sides on the die
	int GetRolls(); //The number of times that this die has been rolled
	int GetSides(); //Returns the number of sides on the die

};
