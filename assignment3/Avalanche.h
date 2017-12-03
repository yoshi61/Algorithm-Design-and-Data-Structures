#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Computer.h"
#include <iostream>
#include <string>
//this class is the computer that only gives Rock
class Avalanche : public Computer
{
	public:
		Avalanche(int gRound);
		~Avalanche();
};
#endif