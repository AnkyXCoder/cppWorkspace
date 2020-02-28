/* Copy Constructor

    * When objects are copied C++ must create a new object from an existing object.
    * When is a copy of an object is made?
        - passing object by value as a parameter
        - returning an object from a function by value
        - constructing one object based on another of the same class
    * C++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if not defined one
    * copies the value of each data member to the new object, default memberwise copy
    * if you have a pointer data member
        - Pointer will be copied
        - not the data, pointer is pointing to
        - Shallow vs Deep Copy

    Best Practices
    * provide a copy constructor when your class has raw pointer members
    * provide a copy constructor with a const reference parameter
    * use STL classes as they already provide a copy constructors
    * avoid using raw pointer data member if possible
    
    Shallow Copy constructor is implemented here, please look into "Player.h" header file
*/

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main(void) {

    cout << "Initiating a Player john." << endl;
    Player john;

    display_player(john);

    cout << "Initiating a Player brock." << endl;
    Player brock("brock");

    cout << "Initiating a Player lee." << endl;
    Player lee("lee", 15);

    cout << "Initiating a Player rock." << endl;
    Player rock("rock", 150, 20);

    cout << "Copying Player rock into my_new_player." << endl;
    Player my_new_player{rock};
    display_player(my_new_player);

    return 0;
}