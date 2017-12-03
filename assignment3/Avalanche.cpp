#include <iostream>
#include <string>
#include "Avalanche.h"
using namespace std;
//Create a Avalanche object
//that only give Rock
Avalanche::Avalanche(int gRound) : Computer(gRound)
{
	name = "Avalanche";
	for(int i = 0; i < gRound; i++)
	{
		hand[i] = "R";
	}
}
//destroy a Avalanche object
Avalanche::~Avalanche()
{
}