/* User-defined Mystring header file
    * Mystring Class is defined
    * private and public members are defined
    * default constructor, overloaded constructor and destructor functions are declared here 
*/

#ifndef __MYSTRING_H__
#define __MYSTRING_H__

#include <iostream>

using namespace std;

class Mystring {
private:

    char *str;  // pointer to a char[] that holds a C-style string

public:

    // constructor with default parameter values
    // Default Constructor, No - args constructor
    Mystring();

    // Overloaded Constructor,
    Mystring(const char *s);

    // Implementing the Copy Constructor
    // Deep Copy Constructor
    Mystring(const Mystring &source);

    // Implementing the Move Constructor
    // Move Constructor
    Mystring(Mystring &&source);

    // Implementing the Overloaded Copy assignement operator
    // this is a method that copies one object into another object
    Mystring &operator=(const Mystring &rhs);

    // Implementing the Overloaded Move assignement operator
    // this is a method that moves one object into another object
    Mystring &operator=(Mystring &&rhs);

    // Destructor - Only one - no return type
    ~Mystring();

    // getter member methods
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif