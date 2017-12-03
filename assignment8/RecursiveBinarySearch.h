#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <iostream>
#include <string>
#include <vector>

class RecursiveBinarySearch
{
	private:
		bool binarySearch(int arr[], int obj, int start, int end);
	public:
		bool smartSearch(std::vector<int> v);//take in a vector check if 6 is in it
		RecursiveBinarySearch(); 
		~RecursiveBinarySearch();
};

#endif