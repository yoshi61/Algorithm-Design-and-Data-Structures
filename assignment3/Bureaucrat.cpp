#include <iostream>
#include <string>
#include "Bureaucrat.h"
using namespace std;
//Create a Bureaucrat object
//that only give Rock
Bureaucrat::Bureaucrat(int gRound) : Computer(gRound)
{
	name = "Bureaucrat";
	for(int i = 0; i < gRound; i++)
	{
		hand[i] = "P";
	}
}
//destroy a Bureaucrat object
Bureaucrat::~Bureaucrat()
{
}