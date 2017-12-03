#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Individual.h"
#include "Mutator.h"
#include <iostream>
#include <string>

class BitFlipProb : public Mutator
{
	public:
		virtual Individual mutate(Individual, int k);//takes in an Individual and an integer index k as parameter and returns the offspring after mutation.
		BitFlipProb(double); 						//create a BFP with a probability
		~BitFlipProb();
	private:
		double prob;
};

#endif