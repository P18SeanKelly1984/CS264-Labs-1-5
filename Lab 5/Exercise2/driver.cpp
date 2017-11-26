//============================================================================
// Name        : driver.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 2 driver.cpp for inheritance hierarchy
//============================================================================
#include <iostream>

using std::cout;
using std::endl;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

int main()
{
   Vehicle car( 2, 6, "blue", 14.6, 3 );
   Taxi cab(3.3);
   Truck mack(7.54);

   mack.setCargo(true);

   cout << car << endl;
   cout << cab << endl;
   cout << mack << endl;

   return 0;

} // end main
