#include <iostream>
#include <string>
#include "PaperDoll.h"
using namespace std;
//Create a PaperDoll object
//that only give Rock
PaperDoll::PaperDoll(int gRound) : Computer(gRound)
{
	name = "PaperDoll";
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
//destroy a PaperDoll object
PaperDoll::~PaperDoll()
{
}