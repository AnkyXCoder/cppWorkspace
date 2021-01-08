/*
    Given the provided Money class, please add the overloaded stream insertion << operator, so that it displays a Money object on o output stream as follows:
     * If the Money object Models 1 dollar and 70 Cents, then the Output should be:
     * Money amount{1, 70};
     * cout << amount;
     * dollars: 1 cents: 70, no '\n' or endl should be added.
     * 
     * This Oberloaded Operator should return a reference to a std:ostream object and should be implemented as a non-member friend function.
     * 
     * First, add the Overloaded Friend Operator function declaration to the Money Class in Money.h. 
     * Second, add the Oveloaded Operator function definition in Money.cpp
     * This Overloaded Operator function should not modify the Money object in anyway.
     * 
*/

#include <stdio.h>
#include "Money.h"

using namespace std;

int main(void) {
    
    Money amount {1, 75};
    
    cout << amount;

    return 0;
}