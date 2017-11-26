//============================================================================
// Name        : MyComplex.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 4, complex numbers OOP using operator overloading
//============================================================================

#include "MyComplex.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//Constructor without parameters
MyComplex::MyComplex()
{
	real = 0;
	image = 0;
}

//Constructor with parameters
MyComplex::MyComplex(double a, double b)
{
	real = a;
	image = b;
}

//Destructor
MyComplex:~MyComplex()
{

}

void MyComplex::print()
{
	cout << real << " + " << image << "i\n";
}



//CALCULATING FUNCTIONS

//Add function
MyComplex MyComplex::operator+(const MyComplex &z)
{
	double real_ = real + z.real;
	double image_ = image + z.image;

	return MyComplex(real_, image_);
}

//Subtract function
MyComplex MyComplex::operator-(const MyComplex &z)
{
    double real_ = real - z.real;
    double image_ = image - z.image;

    return MyComplex(real_, image_);
}

//Multiply function
MyComplex MyComplex::operator*(const MyComplex &z)
{
	double real_ = ((real * z.real) - (image * z.image));
	   double image_ =((real * z.image)+(image * z.real));
	return MyComplex(real_, image_);
}




//GETTERS & SETTERS
void MyComplex::setReal(double real_)
{
	real = real_;
	cout << "The real value is now " << real_ << endl;
}

double MyComplex::getReal()
{
	return real;
}


void MyComplex::setImage(double image_)
{
	image = image_;
	cout << "The imaginary value is now " << image_ << endl;
}

double MyComplex::getImage()
{
	return image;
}


