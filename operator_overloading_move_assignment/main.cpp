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
#include <vector>
#include "Mystring.h"

using namespace std;

int main(void) {


    // Test for Move Assignement
    Mystring a{"Hello"};            // Overloaded constructor
    a = Mystring {"Hola"};          // Overloaded constructor then move assignment
    a = {"Bonjour"};                // Overloaded constructor then move assignment

    Mystring empty;                 // no-arguments constructor
    Mystring larry("Larry");        // overloaded constructor
    Mystring stooge {larry};        // copy constructor
    Mystring stooges;               // no arguments constructor

    empty = stooge;                 // copy assignment operator

    empty = "Funny";

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    stooges = "Larry, Moe, and Curly";
    stooges.display();

    vector <Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout << "======Loop1======" << endl;
    for(const Mystring &s:stooges_vec){
        s.display();
    }

    cout << "======Loop2======" << endl;
    for(Mystring &s:stooges_vec){
        s = "Changed";
    }

    cout << "======Loop3======" << endl;
    for(const Mystring &s:stooges_vec){
        s.display();
    }

    return 0;
}