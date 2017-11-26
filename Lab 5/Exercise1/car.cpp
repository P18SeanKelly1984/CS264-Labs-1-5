//============================================================================
// Name        : car.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 1 car.cpp
//============================================================================
#include <iostream>
#include "car.h"
using namespace std;

Car::Car(string name, string colour)
{
	this -> name = name;
	this -> colour = colour;
	maxSpeed = 95;
	engineValves = 4;
}

//SETTERS
void Car::setMaxSpeed(int s)
{ 
   maxSpeed = ( ( s >= 0 && s < 250 ) ? s : 40 ); 
}

void Car::setEngineValves(int v)
{
   engineValves = ( ( v >= 0 && v < 50 ) ? v : 4 );
}

//GETTERS
int Car::getMaxSpeed() const
{
   return maxSpeed;
}

int Car::getEngineValves() const
{
   return engineValves;
}

string Car::getName() const
{
   return name;
}

string Car::getColour() const
{
   return colour;
}

// function print definition
void Car::print() const
{
   cout << "Car: " << name << " is " << colour << " and has a "
        << engineValves << "-valve engine. MAX SPEED = " 
        << maxSpeed << " mph. " << endl;

} // end function print
