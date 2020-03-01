/* Deep Copy Constructor

    Deep Copy Constructor
    * memberwise copy
    * each data member is copied from the source object
    * create a copy of the pointed-to data
    * Each copy will have a pointer to unique storage in the heap
    * the pointer is copied AND what is points to

    Seep Copy constructor is implemented here, please look into "Player.h" header file
    Compile and Debug this file up to the very end.
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