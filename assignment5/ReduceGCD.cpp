#include <iostream>
#include "ReduceGCD.h"
using namespace std;

ReduceGCD::ReduceGCD(){}
//return GCD of x and y
int ReduceGCD::binaryOperator(int x, int y)
{
	if( x < y )
    {
    	return binaryOperator( y, x );
    }
	int result = x % y;
    if( result == 0 )
    {
    	return y;
    }
    else
    {
    	return binaryOperator( y, result);
    }
}

ReduceGCD::~ReduceGCD(){}