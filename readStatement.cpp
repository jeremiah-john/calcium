#include <iostream>
#include <string>
#include "readStatement.h"

//Read in a statement and print it to a string
string readStatement(void)
{
	string statement;

	std::cout << "Enter your expression (must be in reverse polish notation)" << std::endl;

	std::cin >> statement;

	return statement;
}


