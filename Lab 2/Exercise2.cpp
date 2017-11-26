//============================================================================
// Name        : Exercise2.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab2, Exercise2, GCD (greatest common divisor
//============================================================================

#include<iostream>

//gcd prototype
void gcd(int first_number, int second_number);

using namespace std;

int main(int argc, char** argv)
{

	int first_number;
	int second_number;


	cout<<"Enter First Number : ";
	cin>>first_number;

	if(first_number < 0)
	{
		cout << "Please enter a positive number" << endl;
			cin >> first_number;
	}


	cout<<"Enter Second Number: ";
	cin>>second_number;


	if(second_number < 0)
	{
		cout << "Please enter a positive number" << endl;
			cin >> second_number;
	}
	//return the two int values with the calculations to print out the result
	gcd(first_number, second_number);

	return 0;
	
}//end main


	void gcd(int first_number, int second_number)
	{
		int ans = 0;

		for(int i = 1; i <= first_number && i <= second_number; i++)
		{

			//if both numbers result in modular 0, i becomes the GCD
			if(first_number % i == 0 && second_number % i == 0 )
			{
			ans = i;

			}

		}
		cout<<"Greatest Common Division (GCD): "<<ans<<endl;
	}


