//============================================================================
// Name        : taxi.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 5, exercise 2 taxi.cpp
//============================================================================
#include "taxi.h"

//Constructor
Taxi::Taxi( double f )
   : Vehicle( 4, 6, "yellow", f, 5 )
{
   customers = false;
   setClassName("Taxi");

}

	//GETTER
	bool Taxi::getCustomers() const
	{
		return customers;
	}

	//SETTER
	void Taxi::setCustomers(bool customers)
	{
		this -> customers = customers;
	}


//Print out boring crap
ostream &operator << ( ostream &output, const Taxi &taxi1 )
{
   output << taxi1.getClassName() << "\n"
          << "\tNumber of doors: "
          << taxi1.getNumberOfDoors()
          << "\n\tNumber of cylinders: "
          << taxi1.getNumberOfCylinders()
          << "\n\tTransmission type: "
          << taxi1.getTransmissionType()
          << "\n\tColor: " << taxi1.getColour()
          << "\n\tFuel level: " 
          << taxi1.getFuelLevel() << "\n";



	   if (taxi1.customers)
	         output << "\tThe taxi has passengers.\n";

	      else
	         output << "\tThe taxi has no passengers.\n";

	      return output;



} // end function operator
