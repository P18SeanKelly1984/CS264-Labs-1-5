//============================================================================
// Name        : Exercise1.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 1, Exercise 2, Is a multiple of?
//============================================================================

#include <iostream>

using namespace std;

int main()
{

	int a, b;
	
	cout << "Enter two digits to determine if the latter is a multiple of the first or not: \n";

	cin >> a>> b;
	
	if( a == b * b){
	

	cout <<a <<" is a multiple of "<< b << endl;
	

	}
	else
	{

	cout <<a <<" is not a multiple of "<< b << endl;

	}

	return 0;
	

}//end main
