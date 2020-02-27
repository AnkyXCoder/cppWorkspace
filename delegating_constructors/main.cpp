/* Delegating Constructors
    * Often the code for constructors is very similar
    * Duplicated code can lead to errors
    * C++ allows delegating constructors
        - code for one constructor can call another constructor in the initialization list
        - avoids duplicating
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