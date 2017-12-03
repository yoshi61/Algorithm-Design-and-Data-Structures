#ifndef BITFLIP_H
#define BITFLIP_H
#include "Individual.h"
#include "Mutator.h"
#include <iostream>
#include <string>

class BitFlip : public Mutator
{
	public:
		virtual Individual mutate(Individual, int k);//takes in an Individual and an integer index k as parameter and returns the offspring after mutation.
		BitFlip(); 
		~BitFlip();
};

#endif