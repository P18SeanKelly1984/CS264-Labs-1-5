//============================================================================
// Name        : Exercise3.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab 2, Exercise 3, dice roll
//============================================================================

#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(int argc, char** argv) {
	
	int dice1;
	int dice2;
	int outcomes[] = {0,0,0,0,0,0,0,0,0,0,0};
	
int i, n, total_val;

   //system clock to seed random number generator
   time_t t;  
   
   //Initialises random number generator. srand means pseudo random
   srand((unsigned) time(&t));
   
   cout<<" Number of times to roll dice? \n";
   
   cin>>n;

   //Print random numbers from 2 to 12	
   for( i = 0 ; i < n; i++ ) 
     {
    	//have two dice with 6 faces
	    dice1=rand() % 6 + 1;
	    dice2=rand() % 6 + 1; 
	    
	    //add up the value of the two dice 
	    total_val = dice1 + dice2;
	     
	    for(int j = 0; j < 11; j++)
	     
	    if(total_val == j + 2) outcomes[j]++;
	    
	 }   
	
	for(i = 0; i < 11; i++)
	  {
	  cout<< "Outcome total " << i + 2 << " occurred " << outcomes[i] << " times. ";
	  cout<< "Or " << ((100.0/(double)n)*outcomes[i]) << " % of rolls \n";
	  }
	
	return 0;
	
	
}//end main
