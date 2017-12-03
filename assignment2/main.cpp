#include <iostream>
#include "human.h"
#include "computer.h"
#include "referee.h"
using namespace std;
int main()
{	
	int k;       //k stands for rounds of game the user wants to play
	cin >> k;		//user in put round
	if(k<1)
	{
		return 0;
	}
	human player1(k);   //creata a human player
	computer player2(k);  //create a computer player
	string *result1 = player1.getHand(); //get the choices that player1 has made
	string *result2 = player2.getHand(); //get the choices that player2 has made
 	referee judge(result1, result2, k); //referee judges who is the winner
	judge.printResult(k); //print out the result 
	return 0;
}