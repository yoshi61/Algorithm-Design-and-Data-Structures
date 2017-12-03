#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include <iostream>
#include <string>
#include "MapGeneric.h"
//defination of class MapAbsoluteValue
class MapAbsoluteValue : public MapGeneric
{
	private:
		virtual int f(int);
	public:
		MapAbsoluteValue();
		~MapAbsoluteValue();
};
#endif