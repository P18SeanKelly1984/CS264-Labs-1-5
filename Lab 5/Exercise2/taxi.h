//============================================================================
// Name        : taxi.h
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 2 taxi.h
//============================================================================
// taxi.h
#ifndef TAXI_H
#define TAXI_H

#include <iostream>

#include "vehicle.h"

// class Taxi definition
class Taxi : public Vehicle {
   friend ostream& operator<<( ostream &, const Taxi & );

public:
   Taxi( double );
   void setCustomers(bool);
   bool getCustomers() const;

private:
   bool customers;

}; // end class Taxi

#endif // TAXI_H
