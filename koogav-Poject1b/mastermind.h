// EECE 2560 
// Project 1
// Jacky Ko, Patricia Gavelek
//
// mastermind.h
//
// Header file for Project 1. 
// Contains the declaration for the "mastermind" class that initiates the game in the main program and controls the high level game operations.
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
    code secret;		// Secret code data member.
};						// End of mastermind class.

#endif 

// End of header file
