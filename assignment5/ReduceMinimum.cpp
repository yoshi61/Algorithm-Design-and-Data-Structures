#include <iostream>
#include "ReduceMinimum.h"

ReduceMinimum::ReduceMinimum(){}
//return minimum of x and y
int ReduceMinimum::binaryOperator(int x, int y)
{
	if(x >= y)
	{
		return y;
	}
	else
	{
		return x;
	}
}

ReduceMinimum::~ReduceMinimum(){}