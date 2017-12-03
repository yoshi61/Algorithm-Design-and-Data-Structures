#ifndef FILTERODD_H
#define FILTERODD_H
#include <iostream>
#include "FilterGeneric.h"
//defination of class FilterOdd
class FilterOdd : public FilterGeneric
{
	private:
		virtual bool g(int);
	public:
		FilterOdd();
		~FilterOdd();
};
#endif