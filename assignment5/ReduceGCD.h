#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include <iostream>
#include "ReduceGeneric.h"
//defination of class ReduceGCD
class ReduceGCD : public ReduceGeneric
{
	private:
		virtual int binaryOperator(int, int); //return GCD
	public:
		ReduceGCD();
		~ReduceGCD();
};
#endif