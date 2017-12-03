#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
using namespace std;

class human  //this class is the human(real player)
{
	public:
		human(int gRound);
		string *getHand();
		~human();
	private:
		string *hand;
};

#endif