#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
//this class is the human(real player)
class human  
{
	public:
		human(int gRound);//create a human and ask input
		std::string *getHand();//return user input
		~human();//destroy a human object
	private:
		std::string *hand;
};
#endif