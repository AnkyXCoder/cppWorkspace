/* Class Member Access Modifiers

    Public
    - accessible everywhere
    class Class_Name {
    public:
        // declarations
    }

    Private
    - accessible only by members or friends of the class
    class Class_Name {
    private:
        // declarations
    }

    Protected
    - used with inheritance
    class Class_Name {
    protected:
        // declarations
    }
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health {100};
    int xp {0};

public:
    // methods
    void greetings(string player_name) {
        cout << "Hello, " << player_name << ". Welcome to the Game World." << endl;
    }
    void talk(string sentence) {
        cout << name << " says " << sentence << endl;
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
    
    // // accessing attributes, which are private will generate a compiler error.
    // dante.name = "Dante";
    // dante.health = 50;
    // dante.xp = 5;

    // // accessing methods, which uses private attributes will generate a compiler error.
    // dante.greetings(dante.name);
    // dante.is_dead(dante.health);
    // 

    dante.talk("Hello there");


    // creating a new player in heap storage
    Player *enemy = {nullptr};

    // // accessing attributes, which are private will generate a compiler error.
    // enemy = new Player;
    // enemy->name = "Vergil";
    // enemy->health = 100;
    // (*enemy).xp = 100;

    // // accessing methods, which uses private attributes will generate a compiler error.
    // (*enemy).greetings(enemy->name);
    // enemy->is_dead(enemy->health);
    // enemy->talk("I will kill you, Dante.");

    delete enemy;

    return 0;
}