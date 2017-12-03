#include <iostream>
#include <string>
#include "Crescendo.h"
using namespace std;
//Create a Crescendo object
//that make moves in the oder of PSR
Crescendo::Crescendo(int gRound) : Computer(gRound)
{
	for(int i = 0; i < gRound; i++)
	{
		name = "Crescendo";
		int j = i % 3;
		switch(j)
		{
			case 0 :
				hand[i] = "P";
				break;
			case 1 :
				hand[i] = "S";
				break;
			case 2 :
				hand[i] = "R";
				break;
		}

	}
}
//destroy a Crescendo object
Crescendo::~Crescendo()
{
}