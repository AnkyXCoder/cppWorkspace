/* Operator Overloading
    * using traditional operaotrs such as =, -, *, + etc with user defined types
    * allows user defined types to behave similar to built-in types
    * can make code more readable and writable
    * not done automatically (except for the assignement operator)
    * explicitly defined
    * majority of the C++ operators can be overloaded
    * the operators (::, :?, .*, ., sizeof) can not be overloaded.

    Basic Rules:
    * Precedence and Associativity can not be changed
    * 'arity' can not be changed (can not make binary operator a unary one)
    * can't overload operators for primitive types (e.g. int, double, etc.)
    * can't create new operators
    * [], (), ->, and = must be declared as member methods
    * other operators can be declared as member methods or global methods

*/

#include <iostream>
#include "Mystring.h"

using namespace std;

int main(void) {
    Mystring empty;
    Mystring larry("Larry");
    Mystring john("John");

    larry.display();
    john.display();
    
    return 0;
}