#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H


#include <iostream>
#include <cstring>

class Money {
    int dollars;
    int cents;
    std::string name_str;
public:

    Money(std::string str, int dollars, int cents); 
    Money(int total);
    
    friend Money operator+(const Money &lhs, const Money &rhs);

    // getter member methods
    void display() const;
};


#endif //_MONEY_MONEY_H
