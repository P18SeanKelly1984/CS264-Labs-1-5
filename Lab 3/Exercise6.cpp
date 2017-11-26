//============================================================================
// Name        : Exercise6.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab3 Exercise6, customer list
//============================================================================

#include <iostream>
#include "customers.h"

using namespace std;


int main(int argc, char** argv) 
{
    //declare an int to allow user to create a list size
    int numb;
     
    //string for the name of each customer
    string name;

    //input prompt for numbers
    cout << "How many customers are on the list? ";
    cin >> numb;
    
    //input prompt for names
    cout << "Please enter the name of the first customer: ";
    cin >> name;
    
    //Customer points to the createList
    Customer* head = createList(name);
    
    //continuation of list details inputs after first customer
    for (int i = 1; i < numb; i++) 
    {
        cout << "Please enter the name of customer " << i + 1 << ": ";
        cin >> name;
    
        insertName(head, name);
    }

    numb = listLength(head);
     
    cout << endl << "List length: " << numb << endl << endl << "Customer names:" << endl;

	
    printCustomers(head);

    return 0;
    
}//end main
