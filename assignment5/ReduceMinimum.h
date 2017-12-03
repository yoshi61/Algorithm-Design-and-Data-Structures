#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include <iostream>
#include "ReduceGeneric.h"
//defination of class ReduceMinimum
class ReduceMinimum : public ReduceGeneric
{
	private:
		virtual int binaryOperator(int, int);//return minimum
	public:
		ReduceMinimum();
		~ReduceMinimum();
};
#endif