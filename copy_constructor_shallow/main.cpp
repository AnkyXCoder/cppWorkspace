/* Shallow vs Deep Copy Constructor

    Shallow Copy Constructor
    * memberwise copy
    * each data member is copied from the source object
    * the pointer is copied not what is points to (Shallow)
    * Problem: when we release the storage in the destructor, the other object still refers to the released storage

    Shallow Copy constructor is implemented here, please look into "Player.h" header file
    Compile and Debug this file up to the very end, notice that this application breaks at the end, because in while display_player is called, a copy is made of the object "rock". after displaying player data, destructor of the copied object is called and that deletes the allocated memory to mana attribute. at the end of the program, compiler tries to delete the memory that is already deleted. which causes the application to crash.
*/

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main(void) {
    cout << "Initiating a Player rock." << endl;
    Player rock("rock", 150, 20, 50);
    display_player(rock);

    cout << "Copying Player rock into my_new_player." << endl;
    Player my_new_player{rock};
    my_new_player.set_mana(100);

    return 0;
}