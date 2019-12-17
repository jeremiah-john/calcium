#include "evaluation.h"
#include "readStatement.h"
int main(void)
{
	std::string expression; //this is the expression to evaluate;
	expression = readStatement();
	return evalLoop(evaluateStatement(expression));
}
