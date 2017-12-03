#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <iostream>
#include <string>
#include <vector>
//defination of class ReduceGeneric
class ReduceGeneric
{
	private:
		virtual int binaryOperator(int, int) = 0;
		std::vector<int> reduce(std::vector<int> v, int size);

	public:
		ReduceGeneric();
		std::vector<int> reduce(std::vector<int> v);
		~ReduceGeneric();
};
#endif