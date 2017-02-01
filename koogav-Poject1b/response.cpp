//
//  response.cpp
//  koogav-Poject1b
//
//  Created by Patricia Gavelek on 2/1/17.
//  Copyright © 2017 Patricia Gavelek. All rights reserved.
//

#include "response.h"

// constructor, initializes data members to 0
response::response()
{
    incorrect = 0;
    correct = 0;
};

// sets the data member correct to the entered value
void response::setcorrect(int n)
{
    correct = n;
    
};

// sets the data member incorrect to the entered value
void response::setincorrect(int n)
{
    incorrect = n;
};

int response::getcorrect()const
{
    return correct;
};


int response::getincorrect()const
{
    return incorrect;
};

// overloades == operator to compare 2 responses
bool operator== (const response& lhs, const response& rhs)
{
    return lhs.getcorrect() == rhs.getcorrect() && lhs.getincorrect() == rhs.getincorrect();
};

// overloads << to print a response in the form #, #
ostream& operator<< (ostream& ostr, const response& r)
{

    // output the response
    ostr  << r.getcorrect() << ',' << r.getincorrect();
    
    return ostr;
};
