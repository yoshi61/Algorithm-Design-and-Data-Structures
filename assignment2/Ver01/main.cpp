#include <iostream>
#include "human.h"
#include "computer.h"
#include "referee.h"
#include <time.h>
#include <unistd.h>

using namespace std;

int main()
{	
	int k;       //k stands for rounds of game the user wants to play
	do
	{
		cin >> k;
		cin.clear();
		cin.ignore(10, '\n');					//check input
	}while(k < 1);
	human player1(k);
	computer player2(k);
	string *result1 = player1.getHand();
	string *result2 = player2.getHand();
 	referee judge(result1, result2, k);
	judge.printResult(k);

	return 0;
}