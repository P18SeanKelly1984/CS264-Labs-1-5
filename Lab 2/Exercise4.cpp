//============================================================================
// Name        : Exercise4.cpp
// Author      : Sean KELLY, 17185530
// Description : Lab2, Exercise4, Concatenating strings using functions
//============================================================================

#include <iostream>
#include<string>

//two prototype functions are used
int my_string_len(char str[]);
void my_string_cat(char dest[], char src[], int dest_size);

using namespace std;

//main function, compiler requires int argc and char** argv
int main(int argc, char** argv) 
{
	//two strings each containing a maximum of 20 chars
	char string1[20];
	char string2[20];

	//Instruct user to enter the first string
	cout<<" Please enter the first string. \n";

	gets(string1);

	//Instruct user to enter the second string
	cout<<" Please enter string 2. \n";

	gets(string2);

	//call the function that concatenates the two strings
	my_string_cat(string2,string1,20);

	//program is finished
	return 0;

}// end main


int my_string_len(char str[])
{	
    int length = 0;
    int i = 0;
          
        do
         {	
             // means if not equal to the return character aka \0 iterate incrementally
             length++;
             i++;
		
         } while((str[i]) != '\0');     
         
       //when string length is found return value  
       return length;  
    }
    
    void my_string_cat(char dest[], char src[], int dest_size)
    {
    	
    int str1length = my_string_len(src);
    
    cout<< "\n string 1 length is "<<str1length<<"\n";
    
    int str2length = my_string_len(dest);
    
    cout<< "\n string 2 length is "<<str2length<<"\n";
    
    if((str1length + str2length) <= dest_size)
    	{
    		
    	for(int i=0 ; i<str1length; i++)
    	{
        	dest[i+str2length] = src[i];
    	}
    		cout<<"Concatenated strings read....";
    		
    		//if the two strings concatenated are less than the dest_size, execute cout<<dest[j}		
    		for(int j=0; j < (str1length + str2length); j++)
    		{
    		    cout<< dest[j];
    		}
    
    		   
    	}
    
    //if the combined strings don't fit within dest_size call out an error
    else 
    {
        cout<<"Error, dest too small to hold both strings.";
    }
	    
}

