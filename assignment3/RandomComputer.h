#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"
#include <iostream>
#include <string>
//this class is the computer that makes random moves
class RandomComputer : public Computer
{
	public:
		RandomComputer(int gRound);
		~RandomComputer();
};
#endif