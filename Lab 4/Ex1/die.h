//============================================================================
// Name        : die.h
// Author      : Sean KELLY, 17185530
// Description : Lab 4, die.h
//============================================================================
#ifndef DIE_H
#define DIE_H

//Dice class declaration
class die
{
	private:
		int Numsides;
		int value;


	public:	//Accessible by all
	
		//Constructor with default value
		die(int);

		int roll();

		//getters
		int getValue();
		int getNumsides();
		
		//setters
		void setValue(int value);
		void setNumsides(int Numsides);

	
};//end class
	
#endif