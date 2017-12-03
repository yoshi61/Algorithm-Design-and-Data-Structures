#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include "Individual.h"
using namespace std;

Individual::Individual(int length) //A constructor that takes in the length of the binary DNA and creates the binary string. Each binary value in the list should be given a value of 0 by default.
{
	binaryString = "0";
	for(int i=0; i < length-1; i++)
	{
		binaryString += "0";
	}
}

Individual::Individual(string binary_string) //A constructor that takes in a binary string and creates a new Individual with an identical list. Note that this involves creating a new copy of the list.
{
	binaryString = binary_string;
}

string Individual::getString() //The function outputs a binary string representation of the bitstring list (e.g.“01010100”).
{
	return binaryString;
}

int Individual::getBit(int pos) //The function returns the bit value at position pos. It should return -1 if pos is out of bound.
{
	pos--;
	if(pos < 0 || pos > binaryString.length()-1)
	{
		return -1;
	}
	else
	{
		int bitI = binaryString[pos] - 48;
		return bitI;
	}
}

void Individual::flipBit(int pos) //The function takes in the position of the certain bit and flip the bit value.
{
	pos--;
	if(pos < 0 || pos > binaryString.length()-1)
	{
		cout << "wrong input!!";
	}
	else
	{
		if(binaryString[pos] == '0')
		{
			binaryString[pos] = '1';
		}
		else if(binaryString[pos] == '1')
		{
			binaryString[pos] = '0';
		}
		else
		{
			cout << "value at pos is not a binary" << endl;
		}
	}
}

int Individual::getMaxOnes() //The function returns the longest consecutive sequence of ‘1’ digits in the list (e.g calling the function on “1001110” will obtain 3).
{
	int i = 0;
	char next_value;						//the next char int the binary string
	int max_count = 0;						//this holds the max count of ones so far
	int current_count = 0;					//this holds the current count of ones
	while(i < binaryString.length())		//goes from 0 to length-1
	{
		next_value = binaryString[i];
		if(next_value == '1')				//check next value, if is one then add to current count
		{
			current_count++;
			if(current_count > max_count)	//if current count is larger than max count then max = current
			{
				max_count = current_count;
			}
		}
		else								//if next value is not one, then initialize current_count
		{
			current_count = 0;
		}
		i++;
	}
	return max_count;
}

int Individual::getLength() //The function returns the length of the list.
{
	return binaryString.length();
}

Individual::~Individual()
{
	
}