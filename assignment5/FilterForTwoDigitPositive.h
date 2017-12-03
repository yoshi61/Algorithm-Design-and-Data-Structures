#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include <iostream>
#include "FilterGeneric.h"
//defination of class FilterForTwoDigitPositive
class FilterForTwoDigitPositive : public FilterGeneric
{
	private:
		virtual bool g(int);
	public:
		FilterForTwoDigitPositive();
		~FilterForTwoDigitPositive();
};
#endif