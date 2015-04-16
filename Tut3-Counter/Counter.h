#pragma once
#include <iostream>
using namespace std;
class Counter
{
public:
	//Constructor and Destructot
	Counter(int = 255, int = 0, int = 1, int = 1);
	~Counter();
	
	//Get and Set Member Methods
	void setMax(int);  //Set Maximum Value for count
	int getMax();		
	void setMin(int);  //Set Minimum Value for count
	int getMin();
	int getCount(); //Return count value
	void setInc(int); //Set increment value
	void setDec(int);//Set decrement value

	////Overloaded Operators for increment and decrement
	void operator++(); //Pre
	void operator++(int); //Post
	void operator--(); //Pre
	void operator--(int); //post

	//Overloded Stream insertion operators
	friend ostream& operator<<(ostream &, const Counter);
private:
	int max, min, count, incrementValue, decrementValue;
};

