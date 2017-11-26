//============================================================================
// Name        : die.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 4, die function calculations
//============================================================================
#include "die.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

die::die(int Numsides_)
{
	//System clock to seed random number generator
	time_t t;

	//Current time in seconds
	t = time(0);

	//Initialises random number generator. srand means pseudo random
	srand(t);


    if(Numsides_ < 4)
    {
        cout << "That number is too low to create a die, the number of sides will default to six/n";
        Numsides = 6;
    }

    else
    {
        Numsides_ = Numsides;
    }
    value = 0;
}


int die::roll()
{
	value = rand() % Numsides + 1;
	return value;
}

int die::getNumsides()
{
	return Numsides;
}
int die::getValue()
{
	return value;
}
