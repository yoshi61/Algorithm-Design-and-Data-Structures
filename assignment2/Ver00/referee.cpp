#include <iostream>
#include <string>
#include "referee.h"
using namespace std;

//create a referee taking 2 string arrays and an integer
//values in 2 arrays are compared and the results are stored in result array
referee::referee(string *player1, string *player2, int gRound)
{
	result = new string[gRound];
	for(int i = 0; i < gRound; i++)
	{
		int s;
		//using "if" to transfer string results into integers
		//1 for Win 2 for Loss 0 for Tie 
		if(player1[i]+player2[i] =="RP")
		{
			result[i] = "L";
		}

		if(player1[i]+player2[i] =="RS")
		{
			result[i] ="W";
		}

		if(player1[i]+player2[i] =="PR")
		{
			result[i] ="W";
		}

		if(player1[i]+player2[i] =="PS")
		{
			result[i] = "L";
		}

		if(player1[i]+player2[i] =="SR")
		{
			result[i] = "L";
		}

		if(player1[i]+player2[i] =="SP")
		{
			result[i] ="W";
		}

		if(player1[i] == player2[i])
		{
			result[i] ="T";
		}
	}
}



//print out all elements in result array
void referee::printResult(int gRound)
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

referee::~referee()
{
	delete result;
}
