#include <iostream>
#include <string>
#include "readStatement.h"
#include "evaluation.h"
int main(void)
{
	string expression; //this is the expression to evaluate;
	expression = readStatement();
	evaluateStatement(expression);
	printValue();

	return 0;
}
