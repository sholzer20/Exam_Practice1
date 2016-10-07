#include <iostream>
#include "Dice.h"
using namespace std;

int main()
{
	Dice d(6); //Creates dice object with 6 sides
	cout << d.Roll() << endl; //Outputs a value from 1 to 6
	if (d.GetSides() != 6)
	{
		cout << "Error in GetSides(). It should return 6\n";
		return 0;
	}
	// Roll the dice 100 times and make sure it works every time.
	bool passed = true;
	for (int i = 0; i < 100; i++)
	{
		int x = d.Roll();
		if (x < 1 || x > 6) //Roll returned an incorrect side
		{
			cout << "Error in Roll() method! Roll returned " << x << endl;
			passed = false;
			break;
		}
	}
	if (passed)
		cout << "Passed roll test" << endl; //SHould output this message!
	cout << "Number of rolls was: " << d.GetRolls() << endl; //Should output 101

	return 0;
}