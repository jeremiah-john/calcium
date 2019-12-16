#include <iostream>
#include <string>
#include <sstream>
#include "evaluation.h"
int evalLoop(stringstream os, int16_t *stack, int *stackCount)
{
    while (!(os.eof()))
    {
        string currentTerm;
	os >> currentTerm;

	if(currentTerm=="+")
	    addition(stack,stackCount);
	else if(currentTer=="-")
            addition(stack,stackCount);
	else
	{
            try
	    {
                
	    }
	}	
    }
}
void evaluateStatement(std::string statement)
{
    int16_t stack[100];
    int result = 0;
    int stackCount; //this tells us how many items are in the stack, which we will need to know for when we need to pull two numbers out of the stack for operation
    stringstream os;
    os << statement << std::endl;
    result = evalLoop(os, &stack, &stackCount)

}
