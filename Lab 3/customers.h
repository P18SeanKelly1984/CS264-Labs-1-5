//============================================================================
// Name        : customer.h
// Author      : Sean KELLY, 17185530
// Description : Lab3, customers.h, Customers structure
//============================================================================

#ifndef customers_h
#define customers_h

using namespace std;

struct Customer 
{
    string name;
    Customer* next;
};


void printCustomers(Customer *head);

#endif

