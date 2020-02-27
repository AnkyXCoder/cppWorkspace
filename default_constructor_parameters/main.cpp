/* Default Constructor Parameters
    * can often simplify our code and reduce the number of overloaded constructors
    * same rules apply as non-member functions
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