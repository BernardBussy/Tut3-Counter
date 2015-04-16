#include "Counter.h"
#include <stdexcept>
#include <iostream>
using namespace std;

Counter::Counter(int mx, int mn, int inc, int dec)
{
	setMax(mx);
	setMin(mn);
	count = min;
}


Counter::~Counter()
{
}


////Get and Set Member Methods
//Set Maximum Value for count
void Counter::setMax(int mx)
{
	if ((mx > 0) && (mx <= 255) && (mx > min)) max = mx;
	else
	{
		throw invalid_argument("Maximum needs to be a value between 1 and 255 and greater than min");
	}
}
int Counter::getMax()
{
	return max;
}
//Set Minimum Value for count
void Counter::setMin(int mn)
{
	if ((mn >= 0) && (mn < max)) { min = mn; count = min;}
	else
	{
		throw invalid_argument("minimun needs to be 0 or greater and less than max");
	}
}
int Counter::getMin()
{
	return min;
}
//Get method for count
int Counter::getCount()
{
	return count;
}

//Set Methods for incrementValue and decrementValue
void Counter::setInc(int inc)
{
	if ((inc > 0) && (inc <= 3))  incrementValue = inc;
	else throw invalid_argument("Invalid Icrement Value");
}
void Counter::setDec(int dec)
{
	if ((dec > 0) && (dec <= 2)) decrementValue = dec;
	else throw invalid_argument("Invalid Decrement Value");
}

////Overloaded Operators for increment and decrement
void Counter::operator++() //Pre
{
	if (count+incrementValue > max)
	{
		count = min;
		cout << "The value of count has exceeded max, resetting counter..." << endl;
	}
	else count+= incrementValue;

}

void Counter::operator++(int dummy) //post
{
	this->operator++();
}

void Counter::operator--() //Pre
{
	if (count-decrementValue < min)
	{
		count = max;
		cout << "The value of count has gone below min, resetting counter" << endl;
	}
	else count-=decrementValue;
}

void Counter::operator--(int dummy) //Post
{
	this->operator--();
}

//Overloading stream insertion operators
//Overloading Output Stream insertion operator

ostream& operator<<(ostream &out, const Counter counterObject)
{
	return out << "This counter has max value: " << counterObject.max << ", This counter has minimum value: " << counterObject.min << ", and count: " << counterObject.count << endl;
}