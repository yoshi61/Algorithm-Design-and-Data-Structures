#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
//this class is the Human(real player)
class Human  
{
	public:
		Human(int gRound);//create a Human and ask input
		std::string *getHand();//return user input
		~Human();//destroy a Human object
	private:
		std::string *hand;
};
#endif