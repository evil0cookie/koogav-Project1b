// EECE 2560 
// Project 1
// Jacky Ko, Patricia Gavelek
//
// response.cpp
//
// The file contains the implementation of the "response" class that stores the response to the guess.
//

#include "response.h"

response::response()
// Constructor, initializes data members to 0.
{
    incorrect = 0;
    correct = 0;
};

void response::setcorrect(int n)
// Sets the data member correct to the entered value.
{
    correct = n;
    
};

void response::setincorrect(int n)
// Sets the data member incorrect to the entered value.
{
    incorrect = n;
};

int response::getcorrect()const
// Gets the value of the correct numbers in correct location.
{
    return correct;
};


int response::getincorrect()const
// Gets the value of the correct numbers in incorrect location.
{
    return incorrect;
};

bool operator== (const response& lhs, const response& rhs)
// Overloads == operator to compare 2 responses.
{
    return lhs.getcorrect() == rhs.getcorrect() && lhs.getincorrect() == rhs.getincorrect();
};

ostream& operator<< (ostream& ostr, const response& r)
// Overloads << to print a response in the form # Correct, # Incorrect location.
{

    // Outputs the response.
    ostr  << "# Correct: " << r.getcorrect() << '\n';
    ostr << "# Incorrect location: " << r.getincorrect() << '\n';
    
    return ostr;
};
