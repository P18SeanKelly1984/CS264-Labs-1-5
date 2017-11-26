//============================================================================
// Name        : Exercise1.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 1, Exercise 1, basic calculations with integers
//============================================================================

#include <iostream>

using namespace std;

int main()
{

	int a, b, c, sum, product, smallest, largest;
	
	cout << "Please enter three integer values: \n";

	cin >> a>> b>> c;
	
	sum = a + b + c;

	product = a * b * c;

	//find largest
	if (a>b && a > c)
	{
		largest = a;
	}
	else if (b>c && b> c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	//find smallest
	if (a<b && a< c)
	{
		smallest = a;
	}
	if (b<c && b< c)
	{
		smallest = b;
	}
	else
	{
		smallest = c;
	}


	cout <<"The sum of the three numbers is "<<sum << endl;
	cout <<"The product of the three numbers is "<<product << endl;
	cout <<"The largest number is " <<largest << endl;
	cout <<"The smallest number is " << smallest << endl;

	return 0;

}//end main
