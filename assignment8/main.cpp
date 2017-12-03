#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main()
{
	//collect input in one line and put in vectors
   	string input;
  	getline( std::cin, input );
  	istringstream is( input );
  	vector<string> L( ( istream_iterator<string>( is ) ), istream_iterator<string>() );
	vector<int> array;
	int valueHolder;
	for(int s=1; s<L.size(); s++)
	{
		stringstream stoi1(L[s]);
		stoi1 >> valueHolder;
		array.push_back(valueHolder);
	}

	//choose search method
	if(L[0] == "B")
	{
		BubbleSort prettySort;
		array = prettySort.smartSort(array);	
	}
	if(L[0] == "Q")
	{
		QuickSort funSort;
    	array = funSort.smartSort(array);
	}

	//search for 6 and output
    RecursiveBinarySearch search;
    if(search.smartSearch(array))
    {
    	cout << "true ";
    }
    else
    {
    	cout << "false ";
    }

    //output the sorted vector
	for(int i = 0; i < array.size(); i++)
	{
		cout << array[i];
		if(i<array.size()-1)
		{
			cout << " ";
		}
	}
    cout << endl;

    return 0;
}