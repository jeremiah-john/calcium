#include <iostream>
#include <string>
#include "evaluation.h"
#include "readStatement.h"
int main(void)
{
	std::string expression; //this is the expression to evaluate;
	expression = readStatement();
	int k = evaluateStatement(expression);
	
        std::cout << k << std::endl;
	return 0;
}
