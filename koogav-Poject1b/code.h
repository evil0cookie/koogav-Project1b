// EECE 2560 
// Project 1
// Jacky Ko, Patricia Gavelek
//
// Header file for Project 1. 
// Contains the declaration for the "code" class used for the secret code and the guess code in the main program.
//

#ifndef code_h
#define code_h

#include <vector>

using namespace std;

class code
{
public:
//  Constructor
	code(int n = 0, int m = 0);

//  Code Generation/Input Operations
	void generateCode();
	void generateCodePreset();
	void inputCode();

//  Hint Generation Operations
	int checkCorrect(const code &guess);
	int checkIncorrect(const code &guess);

//  Code Checking Operations
	void showCode();
    
    
//  Checking variables
    int getLength() const;
    int getRange() const;

private:
	int codeLength, range;		// Size of the code and the upper bound (exclusive) of the allowed integers.
	vector<int> codeNumbers;	// Vector that stores the code
};								// End of code class

#endif

// End of header file
