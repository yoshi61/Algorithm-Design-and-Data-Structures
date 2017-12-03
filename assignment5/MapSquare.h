#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include <iostream>
#include <string>
#include "MapGeneric.h"
//defination of class MapSquare
class MapSquare : public MapGeneric
{
	private:
		virtual int f(int);
	public:
		MapSquare();
		~MapSquare();
};
#endif