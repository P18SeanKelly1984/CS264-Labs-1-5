//============================================================================
// Name        : Exercise5.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 1, Exercise 5, find all prime numbers between 1 and 5000
//============================================================================

#include <iostream>
#include <iomanip>    
 
using namespace std;
 
int main()
{
    int num = 0;
	int i = 0;
	int count;
	
	int n = 5000;

    for(num = 3; num <= n; num++)
	{
        count = 0;
        for(i = 2; i <= num/2; i++)
		{
            if(num %i == 0)
			{
                count++;
                break;
            }
        }
 
        if(count == 0 && num != 1)
            cout << num <<", "<< setw(3); //setw means set width, used for formatting
            
          
    }
    return 0;
    
}//end main

