#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"
#include <iostream>
#include <string>
//this class is the computer that only gives Rock
class PaperDoll : public Computer
{
	public:
		PaperDoll(int gRound);
		~PaperDoll();
};
#endif