#include <iostream>
#include <string>
#include "Computer.h"
using namespace std;
//Create a Computer object
//that only give Rock
Computer::Computer(int gRound)
{
	hand = new string[gRound];
}
//return the choice of the Computer
string *Computer::getHand()
{
	return hand;
}
//print out the computer's name
void Computer::printName()
{
	cout << name << endl;
}
//destroy a Computer object
Computer::~Computer()
{
}