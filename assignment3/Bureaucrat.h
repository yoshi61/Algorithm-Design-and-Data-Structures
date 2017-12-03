#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Computer.h"
#include <iostream>
#include <string>
//this class is the computer that only gives Rock
class Bureaucrat : public Computer
{
	public:
		Bureaucrat(int gRound);
		~Bureaucrat();
};
#endif