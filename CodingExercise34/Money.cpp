#include <iostream>
#include <cstring>
#include "Money.h"

Money::Money(std::string name, int dollars, int cents): name_str{name}, dollars{dollars}, cents{cents} {
}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

bool Money::operator==(const Money &rhs) const{
    return (((dollars == rhs.dollars) && (cents == rhs.cents)) != 0);
}

bool Money::operator!=(const Money &rhs) const{
    return (((dollars == rhs.dollars) && (cents == rhs.cents)) == 0);
}
//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


// getter member methods

void Money::display() const { 
    std::cout << name_str << " have " << dollars << " dollars and " << cents << " cents." << std::endl;
};