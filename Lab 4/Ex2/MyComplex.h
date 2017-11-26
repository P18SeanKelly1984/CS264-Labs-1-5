//============================================================================
// Name        : MyComplex.h
// Author      : Sean KELLY, 17185530
// Description : Complex numbers OOP, MyComplex.h
//============================================================================
#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H

using namespace std;

// MyComplex class declaration
class MyComplex
{
	// Accessible by members of this class only
	private: //Alternatively, protected may be used

		// private data members (variables)
		double real, image;


	// Accessible by ALL
	public:

		// Declare prototype of member functions
		double getReal();
		void setReal(double);

		double getImage();
		void setImage(double);

	   // Constructor with no values
	   MyComplex();
	   
	   // Destructor
	   ~MyComplex();

	   // Constructor with default values
	   MyComplex(double, double);

	   // Math functions, with contents in memory address z never changing
	   MyComplex Add(const MyComplex &z);
	   MyComplex Subtraction(const MyComplex &z);
	   MyComplex Multiply(const MyComplex &z);

	   //print out calculations at the end of the coding sequence
	   void print();

};//end class

#endif
