#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include <string>
class referee  //this class is the referee, judges who is th winner
{
	public:
		//create a referee taking 2 string arrays and an integer
		//values in 2 arrays are compared and the results are stored in result array
		referee(std::string *player1, std::string *player2, int gRound);
		//print out all elements in result array
		void printResult(int gRound);
		~referee();
	private:
		std::string *result;
};
#endif