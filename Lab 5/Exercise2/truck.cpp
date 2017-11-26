//============================================================================
// Name        : truck.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 2 truck.cpp
//============================================================================
#include "truck.h"

/* Write definition for class Truck's constructor */
Truck::Truck( double f )
   : Vehicle( 2, 16, "black", f, 8 )
{
   cargo = false;
   setClassName( "Truck" );

} // end class Taxi constructor

// function hasCargo definition
bool Truck::hasCargo() const
{
   return cargo;

} // end function hasCargo

// function setCargo definition
void Truck::setCargo( bool c ) 
{
   cargo = c;

} // end function setCargo

// function operator<< definition
ostream &operator<<(ostream &output, const Truck &t )
{
   output << t.getClassName() << "\n"
          << "\tNumber of doors: " 
          << t.getNumberOfDoors()
          << "\n\tNumber of cylinders: " 
          << t.getNumberOfCylinders()
          << "\n\tTransmission type: " 
          << t.getTransmissionType()
          << "\n\tColor: " << t.getColour()
          << "\n\tFuel level: " 
          << t.getFuelLevel() << "\n";

   if ( t.cargo )
      output << "\tThe truck is currently carrying cargo.\n";

   else
      output << "\tThe truck is not carrying cargo.\n";

   return output;

} // end function operator<<
