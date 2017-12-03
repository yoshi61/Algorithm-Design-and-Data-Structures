#include <iostream>
#include "FilterNonPositive.h"
using namespace std;

FilterNonPositive::FilterNonPositive(){}
//return non positive num
bool FilterNonPositive::g(int x)
{
	if(x<1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

FilterNonPositive::~FilterNonPositive(){}