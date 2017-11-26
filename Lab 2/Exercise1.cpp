//============================================================================
// Name        : Exercise1.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab2, Exercise1, swapping values
//============================================================================

#include <iostream>
//my_swap function prototype
void my_swap(int& num1, int& num2);

using namespace std;


int main(int argc, char** argv)
{

	int num1 = 0;
	int num2 = 0;
	
	//instruct user
	cout <<"Please enter two integer values:"<< endl;
	
	cin >> num1 >> num2;
	cout<<"\n Before swap, num1 is "<<num1<<", num2 is "<<num2<<"\n";
	
	my_swap(num1,num2);
	
	cout<<"When values are swapped the value of num1 becomes "<<num1 << ", and the value of num2 is " <<num2 << endl;
	
		return 0;

}//end main


//my_swap function with two int parameters by contents of memory locations/addresses
void my_swap(int& num1, int& num2)
{
	int temp = 0;
	
	temp = num1;
	num1 = num2;
	num2 = temp;


}
