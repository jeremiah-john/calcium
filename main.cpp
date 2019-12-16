#include <iostream>
#include <string>
#include "evaluation.h"
#include "readStatement.h"
int main(void)
{
	std::string expression; //this is the expression to evaluate;
	expression = readStatement();
	evaluateStatement(expression);
	
	return 0;
}
