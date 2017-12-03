#include <iostream>
#include <string>
#include "human.h"
using namespace std;

//create a human
human::human(int gRound)
{
	hand = new string[gRound];
	for(int i = 0; i < gRound; i++)
	{
		cin >> hand[i];
	}
}

string *human::getHand()
{
	return hand;
}

human::~human()
{
	delete hand;
}
