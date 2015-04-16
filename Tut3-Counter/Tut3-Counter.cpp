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
		counterPtr->setMax(3);
		counterPtr->setMin(3);
	}
	catch (invalid_argument error)
	{
		cout << "You have entered an invalid parameter " << error.what() << endl;
	}
	cout << "The max value is: " << counterPtr->getMax() << " and the min value is " << counterPtr->getMin() << endl;
	return 0;
}

