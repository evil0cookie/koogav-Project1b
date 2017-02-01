//
//  mastermind.hpp
//  koogav-Poject1b
//
//  Created by Patricia Gavelek on 2/1/17.
//

#ifndef mastermind_h
#define mastermind_h

#include <stdio.h>
#include "code.h"
#include "response.h"
class mastermind
{
public:
    //  Constructor
    mastermind();
    mastermind(int n, int m);
    
    //  Code Generation/Input Operations
    void printSecret();
    code humanGuess();
    response getResponse(code guess, code sec);
    bool isSolved(response r);
    void playGame();

    
private:
    code secret;		// Si
};								// End of code class

#endif /* mastermind_h */
