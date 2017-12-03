#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include <iostream>
#include <string>
#include "MapGeneric.h"
//defination of class MapTriple
class MapTriple : public MapGeneric
{
	private:
		virtual int f(int); //triple the input
	public:
		MapTriple();
		~MapTriple();
};
#endif