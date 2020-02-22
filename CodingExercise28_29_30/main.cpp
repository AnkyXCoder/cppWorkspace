/* Coding Exercise 28_29_30
    * Create a header file "Dog.h"
    * Create a C++ class named Dog
    * Add private attributes
    * Add public methods that access private class attributes
*/


#include <iostream>
#include <string>
#include "Dog.h"


int main(void) {

    Dog dog;

    dog.set_name("Spot");
    dog.speak();

    dog.set_age(2);
    int dog_age = dog.get_age();

    string dog_name = dog.get_name();

    int human_age = dog.get_human_years();

    return 0;
}