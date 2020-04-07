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

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR METHOD DECLARATIONS BELOW THIS LINE----


    bool operator==(const Money &rhs) const;

    bool operator!=(const Money &rhs) const;
    
    //----WRITE YOUR METHOD DECLARATIONS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    // getter member methods
    void display() const;
};


#endif //_MONEY_MONEY_H
