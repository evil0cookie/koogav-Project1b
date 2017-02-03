// EECE 2560 
// Project 1
// Jacky Ko, Patricia Gavelek
//
// mastermind.cpp
//
// The file contains the implementation of the "mastermind" class that initiates the game in the main program and controls the high level game operations.
//

#include "mastermind.h"


mastermind::mastermind()
// Constructor sets secret code parameters to default values of length 5 and range [0,10).
{
    secret = code(5, 10);
    secret.generateCode();
    
};

mastermind::mastermind(int n, int m)
// Constructor sets secret code parameters to input values of length and range.
{
    secret = code(n, m);
    secret.generateCode();
};

void mastermind::printSecret()
//  Prints the secret code.
{
    secret.showCode();
};

code mastermind::humanGuess()
// Reads a code from the keyboard.
{
    code guess = code(secret.getLength(), secret.getRange());
    guess.inputCode();
    return guess;
};

response mastermind::getResponse(code guess, code sec)
// Returns how many numbers of the guess code are correct in the right place, and correct in the wrong place.
{
    response r = response();
    r.setcorrect(sec.checkCorrect(guess));
    r.setincorrect(sec.checkIncorrect(guess));
    return r;
};

bool mastermind::isSolved(response r)
// Returns if the secret code has been guessed.
{
    return r == getResponse(secret, secret);
};

//
void mastermind::playGame()
// Initiates Mastermind game.
{
    response r = response();
    int count = 1;
    
    cout << "Secret code is:";
    printSecret();								// Prints secret code for checking.
    
    while (!isSolved(r) && count != 11) {		// Checks solution and does not allow for more than 10 guesses.
        cout << "Turn # " << count << '\n';
        
        code guess = humanGuess();				// User input of guess.
        r = getResponse(guess, secret);			// Creates "hint" response.
        
        cout << r;
        count++;
    }
    if (isSolved(r))							// Win condition.
    {
        cout << "You won!\n";
    }
    else										// Lose condition.
    {
        cout << "You Lose\n";
    }
};
