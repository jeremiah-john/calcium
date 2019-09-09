#include <iostream>
#include <string>
int main(void)
{
	string expression; //this is the expression to evaluate;
	expression = readStatement();
	int k = evaluateStatement(expression);
	
        std::cout << k << std::endl;
	return 0;
}
