//============================================================================
// Name        : vehicle.h
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 2 vehicle.h
//============================================================================
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;

using std::string;

// class Vehicle definition
class Vehicle {
   friend ostream& operator<<( ostream &, const Vehicle & );

public:
   Vehicle( const int, const int, string, double, const int ); 
   
   //GETTERS
   string getColour() const;
   double getFuelLevel() const;
   string getClassName() const;
   int getTransmissionType() const;
   int getNumberOfDoors() const;
   int getNumberOfCylinders() const;

   //SETTERS
   void setColour( string );
   void setFuelLevel( double );
   void setClassName( string );


private:
   const int numberOfDoors;
   const int numberOfCylinders;
   string vehicleColour;
   double fuelLevel;
   const int transmissionType;
   string className;

   //Print out some pointless crap
   friend ostream& operator<<(ostream &, const Vehicle &);

}; // end class Vehicle

#endif // VEHICLE_H
