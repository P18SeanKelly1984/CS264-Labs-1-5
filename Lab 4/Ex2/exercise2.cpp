//============================================================================
// Name        : exercise2.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 4, complex numbers tester file
//============================================================================

#include "MyComplex.h"
#include <iostream>

using namespace std;


int main()
{
	double realNum;
	double imageNum;

	// Input for first object
	cout << "Please enter the first real number \n";
	cin >> realNum;

	cout << "Please enter the first imaginary number \n";
	cin >> imageNum;

	MyComplex obj1(realNum, imageNum);
	obj1.print();


	// Input for second objects
	cout << "Please enter the second real number \n";
	cin >> realNum;

	cout << "Please enter the second imaginary number \n";
	cin >> imageNum;

	MyComplex obj2(realNum, imageNum);
	obj2.print();


	// Calculations
	MyComplex add;
	add = obj1.Add(obj2);
	add.print();

	MyComplex sub;
	sub = obj1.Subtraction(obj2);
	sub.print();

	MyComplex mult;
	mult = obj1.Multiply(obj2);
	mult.print();


	// Input for second objects
	MyComplex obj3;
	cout << "To create a third object with default 0 values, enter real number\n";
	cin >> realNum;

	cout << "Enter imaginary number\n";
	cin >> imageNum;

	obj3.setReal(realNum);
	obj3.setImage(imageNum);
	obj3.print();


} //end main
