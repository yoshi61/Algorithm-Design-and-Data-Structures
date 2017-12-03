#include <iostream>
#include <sstream>
#include <iterator>
#include <cctype>
#include <string>
#include <vector>
#include "PolishPrefix.h"
using namespace std;

bool is_num(string str);

int main()
{
	//collect input in one line and put in vectors
   	string input;
  	getline( std::cin, input );
  	istringstream is( input );
  	vector<string> L( ( istream_iterator<string>( is ) ), istream_iterator<string>() );

  	//validate the input, print "ERROR" if something is wrong
  	int num_of_op = 0;//number of operator tokens
  	int num_of_int = 0;//number of int tokens
  	int i =0;
  	int value_holder = 0;//hold a int value of a int token temporarily
  	string token = L[i];//read tokens
  	//use while loop to read all tokens
    while(i < L.size()-1)
  	{
		//Check if the token is a number
  		if(is_num(token))
  		{
  			stringstream stoi1(token);
			stoi1 >> value_holder;//string to int and stores it in value_holder
			if(value_holder < 0 || value_holder > 99)//print Error if the int is not 0~99
			{
				cout << "Error" << endl;
				return 0;
			}
			num_of_int++;
			i++;
			token = L[i];//next token
			if(is_num(token))//token after a int token must be another int token or print Error
			{
				if(i == L.size()-1)
				{
					stringstream stoi2(token);
					stoi2 >> value_holder;
					if(value_holder < 0 || value_holder > 99)
					{
						cout << "Error" << endl;
						return 0;
					}
					else
					{
						num_of_int++;
						i++;
            break;
					}
				}
			}
			else
			{
				cout << "Error" << endl;
				return 0;
			}			
  		}
		//Check if the token is a operator
  		else if(token == "+" || token == "-" || token == "*" || token == "/")
  		{
  			num_of_op++;
  			i++;
  			token = L[i];
  		}
  		else
  		{
  			cout << "Error" << endl;
			return 0;
  		}
  	}
	//check if the number of operators is one less than ints	
  	if(num_of_int - num_of_op != 1)
  	{
  		cout << "Error" << endl;
		return 0;
  	}

  	PolishPrefix converter(L);
  	cout << converter.getStd() << " = " << converter.getResult() << endl;

    return 0;
}


bool is_num(string str)//This function check if a string is a number or not
{
    for (int n = 0; n < str.length(); n++)//check every character in the string
    {
        if (!isdigit( str[ n ] ))
        {
            return false;
            break;
        }
    }
    return true;
}