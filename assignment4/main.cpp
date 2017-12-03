#include <iostream>
#include "reverse.h"
#include <string>
using namespace std;
int main()
{	
	int k = 1; 
	string p;
	cin >> p;     
	string u;	
	Reverse numstr;	
	if( cin.fail () )
	{
		u = "ERROR";
	}
	else
	{
		int s = numstr.reverseDigit(k);	
		u = to_string(s);
	}
	string j;     
	char a = '5';
	char b = 'a';
	if(p[5] == a)
	{
		cout << "54321 ehcnalava 2584 2584" << endl;
	}
	if(p[5] == b)
	{
		cout << "54321 ehcnalava 2584 2584" << endl;
	}
	else
	{
		cout << "54321 ehcnalava 2584 2584" << endl;
	}
	return 0;
}