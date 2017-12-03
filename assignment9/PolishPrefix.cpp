#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include "PolishPrefix.h"
using namespace std;

string PolishPrefix::infix()
{
	int length = numbers.size();
	string stdExpression;//standard expression

	if(length == 2)
	{
		stdExpression = numbers[0] + " " +operators[0] + " " + numbers[1];
		return stdExpression;
	}

	string num; //the first number to be read from the number vector
	int opCounter = operators.size()-1;//operator counter counts backward
	int numCounter = 0;

	string op1 = operators[opCounter]; //reads the next operator
	string op2 = operators[opCounter-1]; //reads the operator after op1

	while(numCounter < length)
	{
		if(numCounter == 0)//the first lap needs to read two numbers and a operator
		{
			if(op1 == "+" || op1 == "-")//check operator type
			{
				if(op2 == "*" || op2 == "/")//if multiplication comes after addition, need to have ()
				{
					stdExpression = "(" + numbers[0] + " " + op1 + " " + numbers[1] + ")";
					computeResult = binary_operation(numbers[0], numbers[1], op1);//using binary_operation to compute the result and keep it in computeResult
					numCounter += 2;
					opCounter--;//operator counter counts backward
				}
				else
				{
					stdExpression = numbers[0] + " " + op1 + " " + numbers[1];
					computeResult = binary_operation(numbers[0], numbers[1], op1);
					numCounter += 2;
					opCounter--;
				}
			}
			else
			{
				stdExpression = numbers[0] + " " + op1 + " " + numbers[1];
				computeResult = binary_operation(numbers[0], numbers[1], op1);
				numCounter += 2;
				opCounter--;
			}
		}
		else//2nd lap ~ end
		{
			num = numbers[numCounter];//read next num
			op1 = operators[opCounter];//read next operator
			if(opCounter == 0)//if opCounter reaches end
			{
				op2 = "?";
			}
			else
			{
				op2 = operators[opCounter-1];//read the operator after op1
			}

			if(op1 == "+" || op1 == "-")//do the same thing
			{
				if(op2 == "*" || op2 == "/")
				{
					stdExpression = "(" + stdExpression + " " + op1 + " " + num + ")";
					computeResult = binary_operation(computeResult, num, op1);
					numCounter++;
					opCounter--;
				}
				else
				{
					stdExpression = stdExpression + " " + op1 + " " + num;
					computeResult = binary_operation(computeResult, num, op1);
					numCounter++;
					opCounter--;
				}
			}
			else
			{
				stdExpression = stdExpression + " " + op1 + " " + num;
				computeResult = binary_operation(computeResult, num, op1);
				numCounter++;
				opCounter--;
			}
		}
	}
	return stdExpression;
}

int PolishPrefix::binary_operation(string num1, string num2, string op)//apply a binary operation to a int and a string
{
	int result = 0;
	int a = 0;
	int b = 0;
	stringstream stoi1(num1);//convert string to int
	stoi1 >> a;
	stringstream stoi2(num2);
	stoi2 >> b;
	if(op == "+")
	{
		result = a + b;
	}
	else if(op == "-")
	{
		result = a - b;
	}
	else if(op == "*")
	{
		result = a * b;
	}
	else
	{
		result = a / b;
	}
	return result;
}

int PolishPrefix::binary_operation(int num1, string num2, string op)//apply a binary operation to a int and a string
{
	int result = 0;
	int a = num1;
	int b = 0;
	stringstream stoi2(num2);//convert string to int
	stoi2 >> b;
	if(op == "+")
	{
		result = a + b;
	}
	else if(op == "-")
	{
		result = a - b;
	}
	else if(op == "*")
	{
		result = a * b;
	}
	else
	{
		result = a / b;
	}
	return result;
}

PolishPrefix::PolishPrefix(std::vector<string> v_str)//creat a PolishPrefix object and separate argument vector into 2 different vectors
{
	computeResult = 0;
	int i = 0;
	while(i < v_str.size())
	{
		if(v_str[i] == "+" || v_str[i] == "-" || v_str[i] == "*" || v_str[i] == "/")
		{
			operators.push_back(v_str[i]);
		}
		else
		{
			numbers.push_back(v_str[i]);
		}
		i++;
	}
	standard_expression = infix();
}

int PolishPrefix::getResult()
{
	return computeResult;
}

string PolishPrefix::getStd()
{
	return standard_expression;
}

PolishPrefix::~PolishPrefix()
{

}
