//============================================================================
// Name        : Exercise1
// Author      : Sean KELLY, 17185530
// Description : Lab 4, Exercise 1, dice roll with function classes
//============================================================================

#include <iostream>
#include "die.h"

using namespace std;

int main()
{
	//initialise all integer values
    int sides = 0; int roll = 0;

    //input number of die sides
    cout << "How many sides shall your die have?" << endl;
    cin >> sides;

    die die_(sides);
    cout << "Next, please input the number of rolls for your die." << endl;

    //input the roll
    cin >> roll;

    double outcomes[die_.getNumsides()];

    //Get the value of the die roll
    for(int i = 0; i < roll; i++)
    {
        die_.roll();
        outcomes[die_.getValue() -1]++;
    }

    //output the outcomes from the dice rolls
    for(int i = 0; i < die_.getNumsides(); i++)
    {
    cout << i + 1 << " is equal to " << (outcomes[i]/roll) * 100 << "%" << endl;
    }

}//end main
