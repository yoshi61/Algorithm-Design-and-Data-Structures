#include <iostream>
#include <string>
#include "QuickSort.h"
#include <vector>
#include <algorithm> 
using namespace std;

//take in a array and its start and end index manipulate sort the order in the array
void QuickSort::halfSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
    //shorten the range
    while (i <= j) 
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) 
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    //recursion
    if (left < j)
        halfSort(arr, left, j);
    if (i < right)
        halfSort(arr, i, right);
}
//convert vector into array
vector<int> QuickSort::smartSort(vector<int> v)
{
	int length = v.size();
	int array[v.size()];
	for(int i=0; i<v.size(); i++)
	{
		array[i] = v[i];
	}
	halfSort(array, 0, v.size()-1);
	vector<int> v2;
	for(int i=0; i<length; i++)
	{
		v2.push_back(array[i]);
	}
	return v2;
}

QuickSort::QuickSort(){}
QuickSort::~QuickSort(){}
