#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"
#include <iostream>
#include <string>

class Mutator
{
	public:
		virtual Individual mutate(Individual, int k) = 0;//takes in an Individual and an integer index k as parameter and returns the offspring after mutation.
		Mutator(); 
		~Mutator();
};

#endif