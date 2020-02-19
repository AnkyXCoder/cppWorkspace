/* Accessing Classes and Objects
    - access class
    - access methods
    If we have an object, we can access members using dot (.) operator
    If we have a pointer to an object, we can access members using
        * dereference the pointer and then using dot (.) operator
        * using arrow (->) operator

    Some class members will not be accessible
    we need an object to access instance variables
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    // attributes
    string name {"Player"};
    int health {100};
    int xp {0};

    // methods
    void greetings(string player_name) {
        cout << "Hello, " << player_name << ". Welcome to the Game World." << endl;
    }
    void talk(string sentence) { 
        cout << sentence << endl;
    }
    bool is_dead(int health_points) {
        if (health_points <= 0) {
            cout << "Player is dead." << endl;
            return 1;
        } else {
            cout << "Player is not dead." << endl;
        }
    };
};

int main(void) {

    // declarations
    Player dante;
    
    // accessing attributes
    dante.name = "Dante";
    dante.health = 50;
    dante.xp = 5;

    // accessing methods
    dante.greetings(dante.name);
    dante.is_dead(dante.health);

    // creating a new player in heap storage
    Player *enemy = {nullptr};

    // accessing attributes
    enemy = new Player;
    enemy->name = "Vergil";
    enemy->health = 100;
    (*enemy).xp = 100;

    // accessing methods
    (*enemy).greetings(enemy->name);
    enemy->is_dead(enemy->health);
    enemy->talk("I will kill you, Dante.");

    delete enemy;

    return 0;
}