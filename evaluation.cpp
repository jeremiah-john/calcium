#include "evaluation.h"
int evalLoop(stringstream os)
{
    while (!(os.eof()))
    {
        string currentTerm;
	os >> currentTerm;

	if(currentTerm=="+")
	    return addition(stack,stackCount);
	else if(currentTer=="-")
            return subtraction(stack,stackCount);
	else
	{
            try
	    {
                stack[stackCount] = std::stoi(currentTerm); 
	    }
	    catch(std::invalid_argument)
	    {
                std::cout << "There was an invalid argument in your input!" << std::endl;
	    }
	}	
    }
}
stringstream evaluateStatement(std::string statement)
{
    stringstream os;
    os << statement << std::endl;
    
    return os;
}
