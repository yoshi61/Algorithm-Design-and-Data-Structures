#include <iostream>
#include <string>
#include "computer.h"
using namespace std;
//Create a computer object
//that only give Rock
computer::computer(int gRound)
{
	hand = new string[gRound];
	for(int i = 0; i < gRound; i++)
	{
		hand[i] = "R";
	}
}
//return the choice of the computer
string *computer::getHand()
{
	return hand;
}
//destroy a computer object
computer::~computer()
{
}