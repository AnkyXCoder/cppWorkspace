/* Constructor Initialization Lists
    (until now, all data member values have been set in the constructor body)
    * are more efficient
    * initialization list immediately follows parameter list
    * initializes the data members as the object is created
    * oreder of initialization is the order of declartion in the class
*/

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main(void) {

    Player john;
    Player brock("brock");
    Player lee("lee", 15);
    Player rock("rock", 150, 20);
    return 0;
}