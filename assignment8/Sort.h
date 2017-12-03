#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <string>
#include <vector>

class Sort
{
	private:
		
	public:
		virtual std::vector<int> smartSort(std::vector<int> v) = 0;//pure virtule
		Sort(); 
		~Sort();
};

#endif