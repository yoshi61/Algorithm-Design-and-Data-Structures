#include <iostream>
#include <string>
#include "Referee.h"
using namespace std;
//create a Referee taking 2 string arrays and an integer
//values in 2 arrays are compared and the results are stored in result array
Referee::Referee(string *player1, string *player2, int gRound)
{
	result = new string[gRound];
	winner = 0;
	int count = 0;
	for(int i = 0; i < gRound; i++)
	{
		//using "if" to transfer string results into integers
		//1 for Win 2 for Loss 0 for Tie 
		if(player1[i]+player2[i] =="RP")
		{
			result[i] = "L";
			count--;
		}

		if(player1[i]+player2[i] =="RS")
		{
			result[i] ="W";
			count++;
		}

		if(player1[i]+player2[i] =="PR")
		{
			result[i] ="W";
			count++;
		}

		if(player1[i]+player2[i] =="PS")
		{
			result[i] = "L";
			count--;
		}

		if(player1[i]+player2[i] =="SR")
		{
			result[i] = "L";
			count--;
		}

		if(player1[i]+player2[i] =="SP")
		{
			result[i] ="W";
			count++;
		}

		if(player1[i] == player2[i])
		{
			result[i] ="T";
		}
	}
	if(count < 0)
	{
		winner = 1;
	}
	else
	{
		winner = 0;
	}
}



//print out all elements in result array
void Referee::printResult(int gRound)
{
	for(int i = 0; i < gRound; i++)
	{
		if(i > 0)
		{
			cout << " ";
		}
		cout << result[i];
	}
	cout << endl;
}

bool Referee::getWinner()
{
	return winner;
}

Referee::~Referee()
{
}
