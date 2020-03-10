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
};

// Destructor - Only one - no return type
Mystring::~Mystring(){
    delete [] str;
};

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