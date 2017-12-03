#include <iostream>
#include <string>
#include "BubbleSort.h"
#include <vector>
#include <algorithm> 
using namespace std;

//takes a vector and an int return the sorted vector
vector<int> BubbleSort::smartSort(vector<int> v)
{
	int length = v.size();
	return smartSort(v, length);
}

//takes a vector and an int return the sorted vector
vector<int> BubbleSort::smartSort(vector<int> v, int length)
{
	if(length < 2)//base case
	{
		return v;
	}
	for(int i=0; i<length-1; i++)
	{
		if(v[i]>v[i+1])
		{
			iter_swap(v.begin()+i, v.begin()+i+1);
		}
		for(int j=0; j< length; j++)
		{
			cout << v[j] << "  ";
		}
		cout << endl;
	}
	v = smartSort(v, length-1);//recursive
	return v;
}

BubbleSort::BubbleSort(){}
BubbleSort::~BubbleSort(){}
