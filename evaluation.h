#ifndef BASICHEADER
#define BASICHEADER
    #include <string>
    #include <iostream>
#endif
#ifndef EVALHEADER
#define EVALHEADER
    #include <sstream>
    std::stringstream evaluateStatement(std::string statement);
    int evalLoop(std::stringstream os);
#endif
