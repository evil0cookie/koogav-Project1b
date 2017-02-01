//
//  mastermind.cpp
//  koogav-Poject1b
//
//  Created by Patricia Gavelek on 2/1/17.
//  Copyright © 2017 Patricia Gavelek. All rights reserved.
//

#include "mastermind.h"

// constructor sets secret code parameters to default values
mastermind::mastermind()
{
    secret = code(5, 10);
    secret.generateCode();
    
};

// constructor sets secret code parameters to input values
mastermind::mastermind(int n, int m){
    secret = code(n, m);
    secret.generateCode();
};

//  print the secret code
void mastermind::printSecret()
{
    secret.showCode();
};

// reads a code from the keyboard
code mastermind::humanGuess()
{
    code guess = code(secret.getLength(), secret.getRange());
    guess.inputCode();
    return guess;
};

// returns how many numbers of the guess code are correct in the right place, and correct in the wrong place
response mastermind::getResponse(code guess, code sec)
{
    response r = response();
    r.setcorrect(sec.checkCorrect(guess));
    r.setincorrect(sec.checkIncorrect(guess));
    return r;
};

// returns if the secret code has been guessed
bool mastermind::isSolved(response r){
    return r == getResponse(secret, secret);
};

//
void mastermind::playGame(){
    response r = response();
    int count = 1;
    
    cout << "Secret code is:";
    printSecret();
    
    while (!isSolved(r) && count != 11) {
        cout << "Turn # " << count << '\n';
        
        code guess = humanGuess();
        r = getResponse(guess, secret);
        
        cout << r;
        count++;
    }
    if (isSolved(r))
    {
        cout << "You won!\n";
    }
    else
    {
        cout << "You Lose\n";
    }
 
};
