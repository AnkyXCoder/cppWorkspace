/* Overloading Constructors
    * classes can have as many constructors as necessary
    * each must have a unique signature
    * Default constructor is no longer compiler-generated once another constructor is declared
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