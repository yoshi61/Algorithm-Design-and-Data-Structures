#include <iostream>
#include <string>
#include <iostream>
#include <sstream>
#include "Rearrange.h"
using namespace std;

Individual Rearrange::mutate(Individual DNA, int k)
{
	if(k > DNA.getLength()) //deal with over lap
	{
		k = k%(DNA.getLength());
	}
	string first_half = "";
	string second_half = "";
	string result_string = "";

	for(int i = 1; i < k; i++) //collect elements before k
	{
		stringstream ss2;
		ss2 << DNA.getBit(i);
		string str2 = ss2.str();

		second_half += str2; 
	}
	for(int j = k; j <= DNA.getLength(); j++) //collect elements after k including k
	{
		stringstream ss1;
		ss1 << DNA.getBit(j);
		string str1 = ss1.str();

		first_half += str1;
	}
	result_string = first_half + second_half; //rearrange the order
	Individual result(result_string);
	return result;

}

Rearrange::Rearrange()
{
}

Rearrange::~Rearrange()
{
}