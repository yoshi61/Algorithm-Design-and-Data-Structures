#include <iostream>
#include "FilterOdd.h"
using namespace std;

FilterOdd::FilterOdd(){}
//check odd or even
bool FilterOdd::g(int x)
{
	if(x%2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

FilterOdd::~FilterOdd(){}