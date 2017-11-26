//============================================================================
// Name        : racecar.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 1 racecar.cpp
//============================================================================
#include <iostream>
using namespace std;
#include "racecar.h"

//Constructor
Racecar::Racecar(string n, string c, string s) : Car (n, c)
{
   gearbox = 6;
   parachuteDeployed = false;
   sponsor = s;
}

//Setter
void Racecar::setGearbox(int gears)
{
   gearbox = ( ( gears <= 10 && gears >= 0 ) ? gears : 6 );
}

//Custom Method
void Racecar::useParachute()
{
   parachuteDeployed = true;
}


//Print crap
void Racecar::print() const
{
   cout << getName() << " also has " << gearbox 
        << " gears and is sponsored by " << sponsor << ". ";

   if(parachuteDeployed)
   {
	   cout << getName() << " has used its parachute.\n";
   }

   else
   {
	   cout  << getName() << " has not used its parachute." << endl;
   }


} // end function print
