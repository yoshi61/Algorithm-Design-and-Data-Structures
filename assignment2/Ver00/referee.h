#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
using namespace std;

class referee  //this class is the referee, judges who is th winner
{
	public:
		//create a referee taking 2 string arrays and an integer
		//values in 2 arrays are compared and the results are stored in result array
		referee(string *player1, string *player2, int gRound);
		//print out all elements in result array
		void printResult(int gRound);
		~referee();
	private:
		string *result;
};

#endif