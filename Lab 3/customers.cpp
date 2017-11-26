//============================================================================
// Name        : customers.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab3 Exercise5, customers.cpp file
//============================================================================
#include <iostream>
#include "customers.h"

using namespace std;

struct customer
{
    std::string name;
    Customer *next;
};

void printCustomers(Customer *head) 
{
    Customer* current = head;

    while (current != NULL) {
        cout << current -> name << endl;
        current = current -> next;
    }
}
