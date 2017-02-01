//
//  response.hpp
//  koogav-Poject1b
//
//  Created by Patricia Gavelek on 2/1/17.
//  Copyright © 2017 Patricia Gavelek. All rights reserved.
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
    
    //
    void setcorrect(int n);
    void setincorrect(int n);
    int getcorrect() const;
    int getincorrect() const;
    
   
    
private:
    int correct, incorrect;		//
};

//global overloaded operators
bool operator== (const response& lhs, const response& rhs);
ostream& operator<< (ostream& ostr, const response& r);

#endif /* response_h */
