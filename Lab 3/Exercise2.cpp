//============================================================================
// Name        : Exercise2.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab3 Exercise2, Reverse sequence ending with -1
//============================================================================

#include <iostream>
#include<string>

using namespace std;

//main function, compiler requires int argc and char** argv
int main(int argc, char** argv) 
{
    //initialise an int valuable called input
	int input = 0;
	
	//start array size at 1
	int size = 1;
	
	//set amount at 1 to begin with
	int amount = 1; 

	cout<<"Press any whole number except -1 to add to the the size of the array.\n";
	cout<<"Press -1 to end.\n";
	
	//type in input value
	cin >> input;
		
	double anArray[amount];
	
	cout<<"Next, please enter the double values, beginning at element [0].\n";
	
	double value = 0;	
		
		//keep inputting code until -1 is pressed
		if(amount != -1) 
		{
			
			//for loop to populate the values (trying to stop a for loop)
			for(int i = 0; i < size; i++)
			{		
	
				cin>> value;
				
				
				//when -1 is entered end the sequence and print out the array of doubles in reverse order	
				if(value == -1)
				{
					cout<< endl << "The numbers inputed reversed are: "<< endl;
		
					for(int j = size - 1 ; j >= 0; j--)
					{
						cout << anArray[j] << ", ";
					}
					
					break;
				}
				
				anArray[i] = value;
				
					cout<< "The value of element [" << i <<"] is = " << anArray[i] <<endl;
				
				//increase the size of the array	
				size = size + amount;
			}
		
	

			return (0);

		}
		
}//end main

