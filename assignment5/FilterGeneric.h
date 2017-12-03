#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <iostream>
#include <string>
#include <vector>
//defination of class FilterGeneric
class FilterGeneric
{
	private:
		virtual bool g(int x) = 0;
		std::vector<int> filter(std::vector<int> v, int size);

	public:
		FilterGeneric();
		std::vector<int> filter(std::vector<int> v);
		~FilterGeneric();
};
#endif