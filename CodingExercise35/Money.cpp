#include <iostream>
#include <cstring>
#include "Money.h"

Money::Money(std::string name, int dollars, int cents): name_str{name}, dollars{dollars}, cents{cents} {
}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}

Money operator+(const Money &lhs, const Money &rhs) {
    int total = (lhs.dollars + rhs.dollars) * 100;
    total += lhs.cents + rhs.cents;
    return Money{total};
}
// getter member methods

void Money::display() const { 
    std::cout << name_str << " have " << dollars << " dollars and " << cents << " cents." << std::endl;
};