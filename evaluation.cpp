#include "evaluation.h"
#include "readStatement.h"
int evalLoop(std::stringstream os)
{
    int16_t stack[100];
    int stackCount = 0; //this tells us how many items are in the stack so we can fetch the necessary operands for each operation that comes up
    while (!(os.eof()))
    {
	std::string currentTerm;
	os >> currentTerm;

	if(currentTerm=="+")
	{
	    if(stackCount > 2) //see if there are enough operands in the stack in order to do the operation
	    {
                stack[stackCount -2] = stack[stackCount-2] + stack[stackCount-1];
		stack[stackCount-1] = 0;
		stackCount -= 1;  //we deleted one operand from the stack when we did the addition, thus stackCount goes down by 1 only
		
	    }
	    else
	    {
		    std::cout << "Invalid Input: there were not enough operands for addition!" << std::endl;
		    return evalLoop(evaluateStatement(readStatement()));
	    }
	}
	else if(currentTerm=="-")
        {
            if(stackCount > 2) //see if there are enough operands in the stack in order to do the operation
	    {
                stack[stackCount -2] = stack[stackCount-2] - stack[stackCount-1];
		stack[stackCount-1] = 0;
		stackCount -= 1;  
		
	    }
	    else
	    {
		    std::cout << "Invalid Input: there were not enough operands for subtraction!" << std::endl;
		    return evalLoop(evaluateStatement(readStatement()));
	    }
        }
	else
	{
            try
	    {
                stack[stackCount++] = std::stoi(currentTerm);	
	    }
	    catch(std::invalid_argument)
	    {
                std::cout << "There was an invalid argument in your input!" << std::endl;
		return evalLoop(evaluateStatement(readStatement()));
	    }
	}	
    }
    if(stackCount > 1) //if there was another operand put in that did not get "operated" on
    {
	    std::cout << "Invalid Input: there are leftover operands! returning total from all previous operations without leftover operands" << std::endl;
	    return stack[stackCount-1];
    }
    return stack[stackCount-1]; //returns result of all previous operations. Problem: won't this return the last entered number even if no operations were ever done? Answer: Yes, but that is fine for right now
}

std::stringstream evaluateStatement(std::string statement)
{
    std::stringstream os;
    os << statement << std::endl;
    
    return os;
}
