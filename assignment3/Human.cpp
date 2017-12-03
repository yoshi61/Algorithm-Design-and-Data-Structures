#include <iostream>
#include <string>
#include "Human.h"
using namespace std;
//create a Human
//this will take an int to determine the size of the string array
//and then ask user to give input(R,P,S)
Human::Human(int gRound)
{
	hand = new string[gRound];
	for(int i = 0; i < gRound; i++)
	{
		cin >> hand[i];
	}
}
//return the Human choices 
string *Human::getHand()
{
	return hand;
}
//destroy a Human object
Human::~Human()
{
}
