#include <iostream>
#include <string>
#include "FistfullODollars.h"
using namespace std;
//Create a FistfullODollars object
//that only give Rock
FistfullODollars::FistfullODollars(int gRound) : Computer(gRound)
{
	name = "FistfullODollars";
	for(int i = 0; i < gRound; i++)
	{
		int j = i % 3;
		if(j == 0)
		{
			hand[i] = "P";
		}
		else
		{
			hand[i] = "S";
		}

	}
}
//destroy a FistfullODollars object
FistfullODollars::~FistfullODollars()
{
}