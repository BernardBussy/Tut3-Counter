// Tut3-Counter.cpp : Defines the entry point for the console application.
//
#include "Counter.h"
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	Counter *counterPtr = new Counter;
	try //Attempt to initialise counter
	{
		counterPtr->setMax(15);
		counterPtr->setMin(12);
	}
	catch (invalid_argument error)
	{
		cout << "You have entered an invalid parameter " << error.what() << endl;
	}
	cout << "The max value is: " << counterPtr->getMax() << " and the min value is " << counterPtr->getMin() << " and the count is:" << counterPtr->getCount() << endl;
	
	for (int i = 0; i < 6; i++) //Test increment
	{
		++(*counterPtr);
		cout << "The value of count is now: " << counterPtr->getCount() << endl;
	}

	for (int i = 0; i < 6; i++) //Test decrement
	{
		--(*counterPtr);
		cout << "The value of count is now: " << counterPtr->getCount() << endl;
	}
	
	return 0;
}

