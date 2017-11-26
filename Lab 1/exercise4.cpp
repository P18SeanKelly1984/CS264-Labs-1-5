//============================================================================
// Name        : Exercise4
// Author      : Sean Kelly, 17185530
// Version     :
// Copyright   : Your copyright notice
// Description : Bank account
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	int ac;
	int bb;
	int tch;
	int tcr;
	int cl;
	int nb;

	cout << "Enter Account Number (or -1 to end)";

	cin >> ac;

	while (ac != -1)
	{
         cout << "Enter Beginning Balance: ";
         cin >> bb;

         cout << "Enter total charge: ";
         cin >> tch;

         cout << "Enter total credits: ";
         cin >> tcr;

         cout << "Enter Credit limit: ";
         cin >> cl;

         nb =(bb + tch) - tcr;
         cout << "New Balance is: " << nb << endl;

         if (nb > cl)
        {
                    cout << "Account: " << ac << endl;

                    cout << "Credit Limit: " << cl << endl;

                    cout << "Balance: " << nb << endl;

                    cout << "Credit limit Exceeded" << endl;
         }
        break;

	}

}//end main

