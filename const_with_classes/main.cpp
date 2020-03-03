/* Using const with Classes

    * Pass arguments to class member methods as const
    * can also create const objects
    * what happens if we call member functions on const objects?
        - setter method can not be used as object is assigned with const qualifier
        - in getter method also compiler throws error as it assumes that the getter method may change the object parameters
    * const-correctness
        - add const qualifier after function and before semi-colon
        - compiler will allow the function to use the object parameters but will not allow to change the object parameters
        - all getter methods should not change any object parameters
*/

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main(void) {

    Player frank("Frank", 100, 10, 50);

    cout << "Player name is " << frank.get_name() << endl;
    
    const Player villain("Zord", 200, 10, 100);

    // won't work as villain is set as const Player and get_name() is not set with const qualifier
    cout << "Villain name is " << villain.get_name() << endl;

    return 0;
}