#include <iostream>
#include <string>
#include <sstream>
#include "readStatement.h"

//Read in a statement and print it to a string
stringstream readStatement(void)
{
	std::string statement;
	stringstream os;

	std::cout << "Enter your expression (must be in reverse polish notation)" << std::endl;


	std::getline(std::cin,statement);
        os << statement << endl;
	return os;
}


