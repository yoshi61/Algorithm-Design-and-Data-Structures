#include <iostream>
#include <string>
#include "RandomComputer.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
using namespace std;
//Create a RandomComputer object
//that makes random moves
RandomComputer::RandomComputer(int gRound) : Computer(gRound)
{
	name = "RandomComputer";
	srand(time(NULL));
	for(int i = 0; i < gRound; i++)
	{
		int random = rand() % 3;
		switch(random)
		{
			case 0 :
				hand[i] = "P";
				break;
			case 1 :
				hand[i] = "S";
				break;
			case 2 :
				hand[i] = "R";
				break;
		}
	}
}
//destroy a RandomComputer object
RandomComputer::~RandomComputer()
{
}