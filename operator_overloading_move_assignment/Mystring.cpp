/* User-defined Mystring cpp file
    * public member methods are defined here
    * default constructor, overloaded constructor and destructor functions are implemented here
*/
#include <iostream>
#include <cstring>
#include "Mystring.h"

using namespace std;

// constructor with default parameter values
// Default Constructor, No - args constructor
Mystring::Mystring():str{nullptr}{
    str = new char[1];
    *str = '\0';
};

// Overloaded Constructor,
Mystring::Mystring(const char *s):str{nullptr}{
    if(s == nullptr){
        str = new char[1];
        *str = '\0';
    } else {
        str =new char[strlen(s) + 1];
        strcpy(str,s);
    }
};

// Implementing the Copy Constructor
// Deep Copy Constructor
Mystring::Mystring(const Mystring &source):str{nullptr}{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
    cout << "Copy Constructor called." << endl;
};

// Implementing the Move Constructor
// Move Constructor         // r-value reference
Mystring::Mystring(Mystring &&source):str{source.str}{
    source.str = nullptr;
    cout << "Move Constructor called." << endl;
};

// Destructor - Only one - no return type
Mystring::~Mystring(){
    if (str == nullptr){
        cout << "Calling Destructor for Mystring: nullptr" << endl;
    } else {
        cout << "Calling Destructor for Mystring:" << str << endl;
    }
    delete [] str;
};

// Implementing the Overloaded Copy assignement operator
// this is a method that copies one object into another object
Mystring &Mystring::operator= (const Mystring &rhs){
    // steps to follow for deep copying
    cout << "using Copy Assignment..." << endl;
    // step 1: checking for self assignment
    if (this == &rhs){      // check if both the values point to the same memory location
        return *this;       // return current object
    }

    // step 2: deallocate storage for this->str
    delete [] str;

    // step 3:Allocate storage for the deep copy
    str = new char [strlen(rhs.str) + 1];

    // step 4: perform the copy
    strcpy(this->str, rhs.str);

    // step 5: return the current object by reference to allow chain assignment
    return *this;
}

// Implementing the Overloaded Move assignement operator
// this is a method that moves one object into another object
// r-value reference
Mystring &Mystring::operator= (Mystring &&rhs){
    // steps to follow for moving
    cout << "using Move Assignment..." << endl;
    // step 1: checking for self assignment
    if (this == &rhs){      // check if both the values point to the same memory location
        return *this;       // return current object
    }

    // step 2: deallocate storage for this->str
    delete [] str;

    // step 3: steal the pointer from the rhs object and assign it to this->str
    str = rhs.str;

    // step 4: Null out the rhs pointer
    rhs.str = nullptr;

    // step 5: return the current object by reference to allow chain assignment
    return *this;
}
// getter member methods

void Mystring::display() const { 
    cout << str << ":" << get_length()  << endl; 
    };


int Mystring::get_length() const { 
    return strlen(str);
};

const char *Mystring::get_str() const{
    return str;
};