#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <string>
#include <vector>
#include "Sort.h"

class QuickSort : public Sort
{
	private:
		void halfSort(int arr[], int left, int right);
	public:
		virtual std::vector<int> smartSort(std::vector<int> v);//takes a vector and an int return the sorted vector
		QuickSort(); 
		~QuickSort();
};

#endif