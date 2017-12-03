#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include <iostream>
#include "FilterGeneric.h"
//defination of class FilterNonPositive
class FilterNonPositive : public FilterGeneric
{
	private:
		virtual bool g(int);
	public:
		FilterNonPositive();
		~FilterNonPositive();
};
#endif