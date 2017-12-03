#include <iostream>
#include <string>
#include "human.h"
using namespace std;
//create a human
//this will take an int to determine the size of the string array
//and then ask user to give input(R,P,S)
human::human(int gRound)
{
	hand = new string[gRound];
	for(int i = 0; i < gRound; i++)
	{
		cin >> hand[i];
	}
}
//return the human choices 
string *human::getHand()
{
	return hand;
}
//destroy a human object
human::~human()
{
}
