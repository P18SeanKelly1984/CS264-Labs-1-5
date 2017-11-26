//============================================================================
// Name        : driver.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 1 driver.cpp
//============================================================================
#include <iostream>
#include "car.h"
#include "racecar.h"
using namespace std;

int main()
{
   Car chevy("Chevrolette", "black");

   cout << "chevy: \n";

   chevy.print();

   Racecar f1("Ferrari", "red", "Bug2Bug");

   f1.setEngineValves( 40 );
   f1.setMaxSpeed( 220 );
   f1.setGearbox( 7 );
   f1.useParachute();

   cout << "\n\nf1: \n";
   f1.print();

   return 0;

} // end main
