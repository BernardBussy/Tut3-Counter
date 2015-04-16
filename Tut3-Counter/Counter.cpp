#include "Counter.h"
#include <stdexcept>
using namespace std;

Counter::Counter(int mx, int mn)
{
	setMax(mx);
	setMin(mn);
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
	if ((mn >= 0) && (mn < max)) min = mn;
	else
	{
		throw invalid_argument("minimun needs to be 0 or greater and less than max");
	}
}
int Counter::getMin()
{
	return min;
}
//
////Overloaded Operators for increment and decrement
//void operator++(); //Pre
//void operator++(int); //Post
//void operator--(); //Pre
//void operator--(int); //Post