#ifndef POLISHPREFIX_H
#define POLISHPREFIX_H

#include <string>
#include <vector>

class PolishPrefix
{
	private:
		std::vector<std::string> numbers;//store operants
		std::vector<std::string> operators;//store operators
		std::string standard_expression;//store the result after converting
		std::string infix();//convert Polish prefix to standard expression and compute the result
		int binary_operation(std::string, std::string, std::string);//apply a binary operation to a int and a string
		int binary_operation(int, std::string, std::string);//apply a binary operation to a int and a string
		int computeResult;//store the result after computing
	public:
		PolishPrefix(std::vector<std::string>);//takes in a vector seperates elements into numbers vector and operators vector
		~PolishPrefix();
		std::string getStd();//return the standard expression
		int getResult();//return the result after computing
};

#endif