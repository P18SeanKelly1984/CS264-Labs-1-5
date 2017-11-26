//============================================================================
// Name        : truck.h
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 2 truck.h
//============================================================================
#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>

#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

#include "vehicle.h"

class Truck:public Vehicle{
	friend ostream& operator<<( ostream &, const Truck & );
private:
	bool cargo;
public:
	Truck(double);
	bool hasCargo() const;
	void setCargo(bool);
};

#endif
