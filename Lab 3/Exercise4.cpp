//============================================================================
// Name        : Exercise4.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab3 Exercise4, Static link structure
//============================================================================

#include <iostream>
#include<string>

using namespace std;

//structure with a string and pointer to next
struct customer
{
	string name;
	
	//customer points to next
	customer *next;
};

//customer is accessing the memory address of head
void print_customers(customer &head)
{
    //customer pointing to cur is accessing the memory of head
	customer *cur = &head;
	while (cur != NULL)
	{
	    //while the value of cur is not null, print out the name and go onto next
		cout << cur->name << endl;
		
		//cur is equal to cur accessing memory of next
		cur = cur ->next;
	}
}

//main function
int main() 
{
    //declaration of customers
	customer
	
	//Object names
	customer1, customer2, customer3;
			
	//customer1 is accessing the memory address of customer 2			  
	customer1.next = &customer2;
	
	//customer2 is accessing the memory address of customer 3
	customer2.next = &customer3;
	
	    //customer3 holds no value
		customer3.next = NULL;
		
		//prints out the three names
		customer1.name = "Jack";
		customer2.name = "Jane";
		customer3.name = "Joe";
		print_customers(customer1);
	
	    //remove information from memory
		return (0);

		
		
}//end main

