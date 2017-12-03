#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
using namespace std;

class computer  //this class is the computer that human play against
{
	public:
		computer(int gRound);
		string *getHand();
		~computer();
	private:
		string *hand;
};

#endif