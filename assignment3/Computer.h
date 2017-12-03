#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>
//this class is the Computer that human play against
class Computer  
{
	public:
		Computer(int gRound);
		std::string *getHand();
		void printName();
		~Computer();
	protected:
		std::string *hand;
		std::string name;
};
#endif