#include <iostream>
#include <string>
#include "computer.h"
using namespace std;

computer::computer(int gRound)
{
	hand = new string[gRound];
	for(int i = 0; i < gRound; i++)
	{
		hand[i] = "R";
	}
}

string *computer::getHand()
{
	return hand;
}

computer::~computer()
{
	delete hand;
}