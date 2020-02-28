/* Coding Exercise 33
    Tasks:
    * add a Copy constructor to an existing class
*/


#include <iostream>
#include <string>
#include "Dog.h"


int main(void) {

    // using Default constructor
    Dog dog;

    dog.set_name("Spot");
    dog.speak();

    dog.set_age(2);
    cout << dog.get_name() << "\'s age is: " << dog.get_age() << endl;

    // using Overloaded constructor
    Dog dog2("Spike", 4);
    cout << dog2.get_name() << "\'s age is: " << dog2.get_age() << endl;

    // using Copy Constructor
    Dog gordon{dog};

    return 0;
}