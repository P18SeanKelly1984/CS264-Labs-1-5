//============================================================================
// Name        : racecar.h
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 1 racecar.h
//============================================================================
#ifndef RACECAR_H
#define RACECAR_H

#include "car.h"

class Racecar : public Car
{
public:
   Racecar(string, string, string);

   void setGearbox(int);
   void useParachute();
   void print() const;

private:
   int gearbox;
   string sponsor;
   bool parachuteDeployed;

}; // end class race car

#endif // RACECAR_H
