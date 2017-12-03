#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include <string>
class Referee  //this class is the Referee, judges who is th winner
{
	public:
		//create a Referee taking 2 string arrays and an integer
		//values in 2 arrays are compared and the results are stored in result array
		Referee(std::string *player1, std::string *player2, int gRound);
		//print out all elements in result array
		void printResult(int gRound);
		bool getWinner();
		~Referee();
	private:
		std::string *result;
		bool winner;
};
#endif