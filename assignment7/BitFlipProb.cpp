#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <unistd.h>
#include <string>
#include "BitFlipProb.h"

Individual BitFlipProb::mutate(Individual DNA, int k)	//flip bit with probability of prob
{
	double decimal;
	srand(time(NULL));							//generates random numbers according to time
	for(int i = 0; i < DNA.getLength(); i++)
	{	
		int num = rand() % 10000 + 0;
		decimal = num;
		decimal /= 10000.00;
		if(decimal <= prob)
		{
			DNA.flipBit(i+1);
		}
	}
	return DNA;
}

BitFlipProb::BitFlipProb(double p)
{
	prob = p;
}

BitFlipProb::~BitFlipProb()
{

}