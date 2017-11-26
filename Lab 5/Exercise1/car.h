//============================================================================
// Name        : car.h
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 1 car.h
//============================================================================
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

// class car definition
class Car
{

	public:
	   Car(string name, string colour);

	   void setMaxSpeed(int);
	   int getMaxSpeed() const;

	   void setEngineValves(int);
	   int getEngineValves() const;

	   string getColour() const;
	   string getName() const;

	   void print() const;

	protected:

	   int maxSpeed;
	   int engineValves;
	   string colour;
	   string name;

}; // end class Car

#endif // CAR_H
