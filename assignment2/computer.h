#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>
//this class is the computer that human play against
class computer  
{
	public:
		computer(int gRound);
		std::string *getHand();
		~computer();
	private:
		std::string *hand;
};
#endif