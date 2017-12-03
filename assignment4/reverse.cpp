#include <iostream>
#include <string>
#include "reverse.h"
using namespace std;

Reverse::Reverse()
{
}
//The function takes in a std::string and returns the reversed string.
string Reverse::reverseString(string letters)
{
    if (letters.length() == 1) //base case
    {
	    return letters;
    }
    return reverseString(letters.substr(1,letters.length())) + letters.at(0);//add the 1st letter to the end
}
// The function takes in an non-negative int value and reverse the digits using recursion. 
//The “reversed” int is then returned. For example, reverseDigit(12345) returns 54321.
int Reverse::reverseDigit(int value)
{
    string strnum = to_string(value);   //transform input value to string
    int num;
    strnum = reverseString(strnum);
    num = stoi(strnum);  //transform back to int
    return num;
}
Reverse::~Reverse()
{

}