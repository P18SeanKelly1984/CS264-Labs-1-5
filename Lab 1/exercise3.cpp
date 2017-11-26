//============================================================================
// Name        : Exercise3.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 1, Exercise 3, Splitting five digit number into single numbers
//============================================================================

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	int one, two, three, four, five, num;
	
	cout << "Enter a five digit number: ";

	cin >> num;

	//mod is used to extract digits individually
	cout << num / 10000<<"\n";
	num = num % 10000;
	
	cout << num /1000<<"\n";
	num = num % 1000;

	cout << num /100<<"\n";
	num = num % 100;

	cout << num /10<<"\n";
	num = num % 10;
	
	cout<< num << endl;
	
	return 0;

}
