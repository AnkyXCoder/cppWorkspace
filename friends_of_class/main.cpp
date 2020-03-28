/* Friends of Class
    Friend
    * A function or class that has access to private class members
    * that function of or class is NOT a member of the class it is accessing
    
    Function
    * can be regular non-member functions
    * can be member methods of another class
    
    Class
    * another class member have access to private class members
    
    Friendship mut be granted not taken
    * declared explicitly in the Class that is granting friendship
    * declared in the function prototype with the keyword "friend"
    
    Friendship is not symmetric
    * must be explicitly granted
        - if A is a friend of B
        - B is NOT a friend of A

    Friendship is not transitive
    * must be explicitly franted
        - if A is a friend of B AND
        - B is a friencd of C
        - A is NOT a friend of C
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