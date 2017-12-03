#include <iostream>
#include "FilterForTwoDigitPositive.h"
using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){}
//true if x is in between 10 and 99
bool FilterForTwoDigitPositive::g(int x)
{
	if(x > 9 && x < 100)
	{
		return true;
	}
	else
	{
		return false;
	}
}

FilterForTwoDigitPositive::~FilterForTwoDigitPositive(){}