#ifndef REARRANGE_H
#define REARRANGE_H
#include "Individual.h"
#include "Mutator.h"
#include <iostream>
#include <string>

class Rearrange : public Mutator
{
	public:
		virtual Individual mutate(Individual, int k);//takes in an Individual and an integer index k as parameter and returns the offspring after mutation.
		Rearrange(); 
		~Rearrange();
	private:
};
#endif