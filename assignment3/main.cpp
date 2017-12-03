#include <iostream>
#include "Human.h"
#include "Avalanche.h"
#include "Computer.h"
#include "Referee.h"
#include "RandomComputer.h"
using namespace std;
int main()
{	
	int k;       //k stands for rounds of game the user wants to play
	cin >> k;		//user in put round
	if(k<1)
	{
		return 0;
	}
	Human player1(k);   //creata a Human player
	RandomComputer player2(k);  //create a Computer player
	string *result1 = player1.getHand(); //get the choices that player1 has made
	//string *result2 = player2.getHand(); //get the choices that player2 has made
 	Referee judge(player1.getHand(), player2.getHand(), k); //Referee judges who is the winner
	judge.printResult(k); //print out the result 
	return 0;
}