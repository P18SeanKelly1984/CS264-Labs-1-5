//============================================================================
// Name        : vehicle.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 2 vehicle.cpp
//============================================================================
#include <iostream>
#include "vehicle.h"
using namespace std;

// constructor
Vehicle::Vehicle( const int doors, const int cylinders, string colour, double initialFuel, const int transmission ):
   /* Write the body for Vehicle's constructor */
	numberOfDoors(doors),
	numberOfCylinders(cylinders),
	vehicleColour(colour),
	fuelLevel(initialFuel),
	transmissionType(transmission){

	setClassName( "Vehicle" );
} // end class Vehicle constructor

// function operator<< definition
ostream &operator<<( ostream &out, const Vehicle &v )
{
   out << v.className << "\n"
	       << "\tNumber of doors: " << v.numberOfDoors
	    << "\n\tNumber of cylinders: " << v.numberOfCylinders
	    << "\n\tTransmission type: " << v.transmissionType
 	   << "\n\tColour: " << v.vehicleColour
	    << "\n\tFuel level: " << v.fuelLevel << endl;

   return out;

} // end function operator<<

/* Write definition for setColor */

// function setFuelLevel definition
void Vehicle::setFuelLevel( double amount )
{
   // assume 20 gallons is full tank
   if ( amount > 0.0 && amount <= 20.0 ) 
      fuelLevel = amount;

   else
      fuelLevel = 5.0;

} // end function setFuelLevel

// return colour
string Vehicle::getColour() const
{   
   return vehicleColour;

} // end function getColor
 
// return fuelLevel
double Vehicle::getFuelLevel() const
{
   return fuelLevel;

} // end function getFuelLevel

// return transmissionType
int Vehicle::getTransmissionType() const
{
   return transmissionType;

} // end function getTransmissionType
   
// return numberOfDoors
int Vehicle::getNumberOfDoors() const
{
   return numberOfDoors;

} // end function getNumberOfDoors

// return numberOfCylinders
int Vehicle::getNumberOfCylinders() const
{
   return numberOfCylinders;   

} // end function getNumberOfCylinders

// function setClassName definition
void Vehicle::setClassName( string newName )
{
   className = newName;

} // end function setClassName

// return className
string Vehicle::getClassName() const  
{
   return className;

} // end function getClassName
