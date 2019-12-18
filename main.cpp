#include "evaluation.h"
#include "readStatement.h"
int main(void)
{
	std::string expression; //this is the expression to evaluate;
	expression = readStatement();
	std::cout << evalLoop(evaluateStatement(expression)) << std::endl;
	return evalLoop(evaluateStatement(expression));
}
