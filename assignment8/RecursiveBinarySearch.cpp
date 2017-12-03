#include <iostream>
#include <string>
#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

//takes an array, 3 ints, find if num is in the array or not
bool RecursiveBinarySearch::binarySearch(int arr[], int obj, int start, int end)
{
	if(start <= end)
	{
		int middle = (start + end) / 2;
		if(arr[middle] == obj)//base case
		{
			return true;
		}
		else if(arr[middle] > obj)
		{
			return binarySearch(arr, obj, start, middle-1);
		}
		else
		{
			return binarySearch(arr, obj, middle+1, end);
		}
	}
	else//base case
	{
		return false;
	}
}
//take in a vector check if 6 is in it
bool RecursiveBinarySearch::smartSearch(std::vector<int> v)
{
	int length = v.size();
	int array[length];
	for(int i=0; i<length; i++)
	{
		array[i] = v[i];
	}
	return binarySearch(array, 6, 0, length-1);
}

RecursiveBinarySearch::RecursiveBinarySearch(){}
RecursiveBinarySearch::~RecursiveBinarySearch(){}
