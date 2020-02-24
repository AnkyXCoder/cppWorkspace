/* Default Constructor

    * Doesn't expect any arguments - the no arguments constructor
    * If you write no constructors for a class, C++ will generate a Default Constructor that does nothing
    * Called when you instantiate a new object with no arguments
*/

#include <iostream>
#include <string>
#include "Player.h"

int main() {

    // Note how Constructos and Destructors are called
    // using default construcor with no arguments
    // Player franky;
    // franky.set_name("Franky");
    // cout << franky.get_name() << endl;
    
    // using default constructor with three arguments
    // Player hero;         // Compiler Error if default constructor - no arguments is not defined
    Player franky("Franky", 100, 3);
    cout << franky.get_name() << endl;


    return 0;
}

