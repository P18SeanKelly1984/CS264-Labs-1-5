//============================================================================
// Name        : Exercise5.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab2 Exercise5, String functions
//============================================================================

#include <iostream>
#include<string>

//two prototype functions are used
void print_string_array(char str[]);
void print_string_ptr(char *str);

using namespace std;

//main function, compiler requires int argc and char** argv
int main(int argc, char** argv) 
{
	
	char myArray[20];
	//*string myStr = myArray;
	
	cout<<"Please enter the string to print.\n";
	
	//gets means get string.  The string characters are placed into myArray or whatever is within the brackets
	gets(myArray);
	
	print_string_array(myArray);

	print_string_ptr(myArray);
	
	cout<<endl;
	
	
	return (0);
}//end main


void print_string_array(char str[])
{	

	int i = 0;
    cout<<"The array indexing method results in\n";  
    do
     {	
     // means if not equal to the return character aka \0 iterate incrementally
	 if(str[i] != '\0')
     cout<<str[i];
      i++;	
     } while((str[i]) != '\0');     
    	
}

void print_string_ptr(char *str)
{
	cout<<"\nThe pointer method results in\n"; 
	
	char *strPtr;
	
	//continue for loop iterations until *strPtr reaches end of String at \0
	for (strPtr = str; *strPtr != '\0'; strPtr++)
	{
		 cout << *strPtr;
}
 

}
