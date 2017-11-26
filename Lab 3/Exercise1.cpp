//============================================================================
// Name        : Exercise1.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab3 Exercise1, Reverse sequence
//============================================================================

#include <iostream>
#include<string>

using namespace std;

//main function, compiler requires int argc and char** argv
int main(int argc, char** argv) 
{
	int amount = 0; 
	
	//number of doubles
	cout<<"Hello, before entering a sequence of doubles, please tell me how many you wish to enter.\n";
	cin>> amount;
	double anArray[amount];
	
	cout<<"Next, please enter the double values.\n";
	
	
	//for loop to populate the values
	for(int i = 0; i < amount; i++)
	{		
		double value;
		cin>> value;
		
		anArray[i] = value;
		
			cout<< "The value of element [" << i <<"] is = " << anArray[i] <<endl;
	}
	
	cout<< endl << "The numbers inputed reversed are: "<< endl;
	
	//for loop to reverse the order and print it out
	for(int j = amount - 1 ; j >= 0; j--)
	{
		cout << anArray[j] << ", ";
	}
	

	return (0);
}//end main

