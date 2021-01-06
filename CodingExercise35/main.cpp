/*
    Given the provided Money class, please add the overloaded + operator, so that it will add two Money objects together and returns a Money object representing their sum.
    These overloaded operator should return a Money object and should be implemented as a non-member friend function.
    First, add the overloaded operator function declaration to the Money class declaration in Money.h.
    Second, add the overloaded operator function definition in Money.cpp.
    These overloaded functions should not modify the objects in any way.
*/

#include <stdio.h>
#include "Money.h"

using namespace std;

int main(void) {
    Money larry ("larry", 10, 35);
    Money moe ("moe", 100, 53);
    
    larry.display();
    moe.display();
    
    Money total = larry + moe;
    
    total.display();

    return 0;
}