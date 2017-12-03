#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Computer.h"
#include <iostream>
#include <string>
//this class is the computer that only gives Rock
class FistfullODollars : public Computer
{
	public:
		FistfullODollars(int gRound);
		~FistfullODollars();
};
#endif