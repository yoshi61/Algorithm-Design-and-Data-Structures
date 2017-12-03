#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Computer.h"
#include <iostream>
#include <string>
//this class is the computer that only gives Rock
class Toolbox : public Computer
{
	public:
		Toolbox(int gRound);
		~Toolbox();
};
#endif