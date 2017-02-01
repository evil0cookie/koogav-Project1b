// EECE 2560
// Project 1
// Jacky Ko, Patricia Gavelek
//
// Main program for Project 1 Part b. The code is for a Mastermind game where users must guess numbers of a secret code.
// Initializes secret code from specified code length and an exclusive upper bound range.
// Hint is generated based on user input for guess code.
//

#include <iostream>
#include "code.h"
#include "mastermind.h"

using namespace std;

int main()
{
    mastermind m = mastermind();
    m.playGame();
   // system("pause");
};
