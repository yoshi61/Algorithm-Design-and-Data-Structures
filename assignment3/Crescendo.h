#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"
#include <iostream>
#include <string>
//this class is the computer that only gives Rock
class Crescendo : public Computer
{
	public:
		Crescendo(int gRound);
		~Crescendo();
};
#endif