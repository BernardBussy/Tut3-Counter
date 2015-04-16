#include "Counter.h"
#include <stdexcept>
#include <iostream>
using namespace std;

Counter::Counter(int mx, int mn)
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
////Set Minimum Value for count
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

int Counter::getCount()
{
	return count;
}

////Overloaded Operators for increment and decrement
void Counter::operator++() //Pre
{
	if (count == max)
	{
		count = min;
		cout << "The value of count was equal to max, resetting counter..." << endl;
	}
	else count++;

}

void Counter::operator++(int dummy) //post
{
	this->operator++();
}

void Counter::operator--() //Pre
{
	if (count == min)
	{
		count = max;
		cout << "The value of count was equal to min, resetting counter" << endl;
	}
	else count--;
}

void Counter::operator--(int dummy) //Post
{
	this->operator--();
}