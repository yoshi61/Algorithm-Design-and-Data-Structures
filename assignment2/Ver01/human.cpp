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
		string tempHand = hand[i];
		int s=0;
	    while(s<tempHand.length())
	    {
	        tempHand[s] = toupper(tempHand[s]);
	        s++;
	    }
	    hand[i] = tempHand;
	}
}

string *human::getHand()
{
	return hand;
}

human::~human()
{

}
