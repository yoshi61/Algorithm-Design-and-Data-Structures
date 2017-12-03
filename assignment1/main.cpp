#include <iostream>
#include "Palindrome.h"
#include <string>
using namespace std;

// main program
int main()
{
	string aPhrase;
	std::getline (std::cin,aPhrase);     //get input
	Palindrome *newPhrase;
	newPhrase = new Palindrome(aPhrase); //create a palindrome and pass the input string to it
	newPhrase->removeNonLetters(); //remove non letters from pString
	newPhrase->lowerCase();			//transfer pString to lowercase
	if(newPhrase->isPalindrome() == true) //if true cout yes if false cout no
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
