#include <iostream>
#include <string>
#include "readStatement.h"

//Read in a statement and print it to a string
std::string readStatement(void)
{
	std::string statement;

	std::cout << "Enter your expression (must be in reverse polish notation)" << std::endl;


	std::getline(std::cin,statement);
	return statement;
}


