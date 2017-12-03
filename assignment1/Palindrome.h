#ifndef PALINDROME_H
#define PALINDROME_H

#include <iostream>
#include "Palindrome.h"
#include <cstdlib>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <functional>  // ptr_fun()
using namespace std;
//creat a class palindrome

class Palindrome
{
	public:
		string pString;              
		Palindrome(string phrase);//creat a palindrome
		void removeNonLetters();//remove non letters from pString
		void lowerCase();    //transfer pString to lowercase
		bool isPalindrome();//output whether the phrase is a Palindrome   
		~Palindrome();      //destroy a palindrome
};


#endif //PALINDROME_H