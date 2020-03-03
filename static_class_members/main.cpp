/* Static Class Members
    Class Data Members can be declared as Static
    * A single data member that belongs to the class, not the objects
    * Useful to store Class wide information
    
    Class Functions can be declared as Static
    * Independent of any objects
    * can be called using the class name
*/

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int display_active_players(void) {
    cout << "Active Players: " << Player::get_num_players() << endl;
}

int main(void) {

    display_active_players();
    Player frank("Frank", 100, 10, 50);
    display_active_players();
    const Player villain("Zord", 200, 10, 100);
    display_active_players();
    Player *enemy = new Player("Wizard", 500, 50, 200);
    display_active_players();
    delete enemy;
    display_active_players();

    return 0;
}