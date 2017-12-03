#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <iostream>
#include <string>
#include <vector>
//defination of class MapGeneric
class MapGeneric
{
	private:
		virtual int f(int x) = 0;
		std::vector<int> map(std::vector<int> v, int size);

	public:
		MapGeneric();
		std::vector<int> map(std::vector<int> v);
		~MapGeneric();
};
#endif