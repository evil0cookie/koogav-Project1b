// EECE 2560
// Project 1
// Jacky Ko, Patricia Gavelek
//
// main.cpp
//
// Main program for Project 1. The code is for a Mastermind game where users must guess numbers of a secret code.
// Initializes secret code from specified code length and an exclusive upper bound range.
// Hint is generated based on user input for guess code.
//

#include <iostream>
#include "code.h"
#include "mastermind.h"

using namespace std;

int main()
{
	int codeLength, codeRange;
	cout << "Please enter desired code length: ";
	cin >> codeLength;										// Input code length.
	cout << "Please enter desired code range: ";
	cin >> codeRange;										// Input code range.

	// Used to prevent error trigger in guess code input.
	cin.clear();											// Clears any error flags in istream.
	cin.ignore(10000, '\n');								// Remove input contents in istream.
	
    mastermind m = mastermind(codeLength, codeRange);
    m.playGame();											// Runs the Mastermind game.

    system("pause");
	return (0);
};
