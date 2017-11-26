//============================================================================
// Name        : Exercise5.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab3 Exercise5, main
//============================================================================
#include <iostream>
#include "customers.h"

using namespace std;

//the main making up part of the split up of exercise 4
int main(int argc, char** argv)
{

    Customer customer1, customer2, customer3;

    customer1.name = "Jack";
    customer2.name = "Jane";
    customer3.name = "Joe";

    customer1.next = &customer2;
    customer2.next = &customer3;
    customer3.next = NULL;

    printCustomers(customer1);

    return 0;
    
}

