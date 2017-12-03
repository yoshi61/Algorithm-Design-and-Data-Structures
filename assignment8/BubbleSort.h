#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
#include <string>
#include <vector>
#include "Sort.h"

class BubbleSort : public Sort
{
	private:
		std::vector<int> smartSort(std::vector<int> v, int length);
	public:
		virtual std::vector<int> smartSort(std::vector<int> v);//takes a vector and an int return the sorted vector
		BubbleSort(); 
		~BubbleSort();
};

#endif