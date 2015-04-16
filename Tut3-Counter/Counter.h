#pragma once
class Counter
{
public:
	//Constructor and Destructot
	Counter(int = 255, int = 0);
	~Counter();
	
	//Get and Set Member Methods
	void setMax(int);  //Set Maximum Value for count
	int getMax();		
	void setMin(int);  //Set Minimum Value for count
	int getMin();

	////Overloaded Operators for increment and decrement
	//void operator++(); //Pre
	//void operator++(int); //Post
	//void operator--(); //Pre
	//void operator--(int); //Post
private:
	int max, min;
};

