#include <iostream>
#include "Palindrome.h"
#include <cstdlib>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <functional>  // ptr_fun()
using namespace std;




Palindrome::Palindrome(string phrase)//creat a palindrome
{
	pString = phrase;
}

void Palindrome::removeNonLetters()//remove non letters from pString
{
	int i=0;
    while(i<pString.length())
    {
        if (isalpha(pString[i]))
        {
        	pString[i]=pString[i];
        	i++;
        }
        else
        {
            pString.erase(i,1);
        }
    }
}

void Palindrome::lowerCase()  //transfer pString to lowercase
{
	int i=0;
    while(i<pString.length())
    {
        pString[i] = tolower(pString[i]);
        i++;
    }
}
bool Palindrome::isPalindrome()//check whether the phrase is a Palindrome  
{
	//check if length is available	
	if(pString.length() < 1)
	{	
		return false;
	}
	

	else
	{

//check if the string is palindrome
		for(int j = 0; j < pString.length(); j++)
		{
			if(pString[j] != pString[pString.length() - 1 - j])//check elements frome both sides
			{
				return false;
			}			
		}
	return true;
	}
}

Palindrome::~Palindrome()//destroy a palindrome
{

}
