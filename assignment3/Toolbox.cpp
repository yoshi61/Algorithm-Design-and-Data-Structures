#include <iostream>
#include <string>
#include "Toolbox.h"
using namespace std;
//Create a Toolbox object
//that only give Rock
Toolbox::Toolbox(int gRound) : Computer(gRound)
{
	name = "Toolbox";
	for(int i = 0; i < gRound; i++)
	{
		hand[i] = "S";
	}
}
//destroy a Toolbox object
Toolbox::~Toolbox()
{
}