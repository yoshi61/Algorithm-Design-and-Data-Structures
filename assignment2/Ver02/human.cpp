#include <iostream>
#include <string>
#include "human.h"
#include <time.h>
#include <unistd.h>
using namespace std;

//create a human
human::human(int gRound)
{
	hand = new string[gRound];
	for(int i = 0; i < gRound; i++)
	{
		do
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
		}while(hand[i] != "R" && hand[i] != "P" && hand[i] != "S");
	}
}

string *human::getHand()
{
	return hand;
}

human::~human()
{

}
