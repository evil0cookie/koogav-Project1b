// EECE 2560 
// Project 1
// Jacky Ko, Patricia Gavelek
//
// response.h
//
// Header file for Project 1. 
// Contains the declaration for the "response" class that stores the response to the guess.
//

#ifndef response_h
#define response_h

#include <stdio.h>
#include <iostream>
using namespace std;

class response
{
public:
    //  Constructor
    response();
    
    //	Functions to get or set stored values in response
    void setcorrect(int n);
    void setincorrect(int n);
    int getcorrect() const;
    int getincorrect() const;
    
private:
    int correct, incorrect;		// Data members that contain "hint" values.
};								// End of response class.

// Global overloaded operators
bool operator== (const response& lhs, const response& rhs);
ostream& operator<< (ostream& ostr, const response& r);

#endif 

// End of header file
