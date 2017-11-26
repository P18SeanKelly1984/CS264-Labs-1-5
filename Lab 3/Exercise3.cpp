//============================================================================
// Name        : Exercise3.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab3 Exercise3, Reverse structure of peoples' names and ages
//============================================================================

#include <iostream>
#include<string>

using namespace std;

    //create a structure to use as a template for each person
	struct person
	{
		string forename;
		string surname;
		int age;
	
	};

//function prototypes
void input(person[]);
void print(person[]);
void initialize(person[]);

//main function, compiler requires int argc and char** argv
int main(int argc, char** argv) 
{
    //set the list size at 5
	person attending[5];
	
	initialize(attending);
	input(attending);

	
		return (0);

		
		
}//end main

//initialise (or with a z as Americans spell it) function
void initialize(person p[])
{
	for(int i = 0; i < 5; i++)
	{
		p[i].forename = "";
		p[i].surname = "";
		p[i].age = 0;

	}
}

//input details for each person takes place here
void input(person p[])
{
	int i = 0;

	while(i < 5)
	{
		cout <<"Please enter the person's first name:\n";
			cin>> p[i].forename;
			
		cout << "The surname, please:\n";
			cin >> p[i].surname;

		cout <<"Lastly, we need to know ther person's age:\n";	
			cin>> p[i].age;

            //when i reaches the value of 4 execute code below
			if(i == 4)
		{
			cout << "\n";
			
			//print out of peoples' names and ages
			for(int j = 4; j >= 0; j--)
			{
				cout<< "Person's name: " << p[i].forename << " " << p[i].surname <<endl;
				cout << "Age of " << p[i].age << endl;
			}
		
		}
		
		//iterate until i == 5
		i++;
	}
	
}


