#include <iostream>
#include <string>
#include "BitFlip.h"

Individual BitFlip::mutate(Individual DNA, int k)
{
	if(k > DNA.getLength())		//if k is over the length then over lap the string
	{
		k = k%(DNA.getLength());
	}
	DNA.flipBit(k);
	return DNA;
}

BitFlip::BitFlip()
{

}

BitFlip::~BitFlip()
{

}