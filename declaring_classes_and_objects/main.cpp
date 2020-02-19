/*  Declare Classes and Objects

    Classes
    - blueprints from which objects are created
    - a user-defined data type
    - has attributes (data)
    - has methods (functions)
    - can hide data and methods
    - provides public interface
    - Examples: Strings, Vectors etc.

    class Class_Name {
        // declarations
    }

    Objects
    - created from a class
    - represents a specific instance of a class
    - can create many many objects
    - each has its own identity
    - each can use methods defined in the class
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};

    // methods
    void talk(string);
    bool is_dead();
};

class Account{
    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    bool deposit();
    bool withdraw();
};

int main(void) {

    // declarations
    Player Dante;
    Player Nero;

    Player players[] {Dante, Nero};

    vector <Player> player_vec {Dante};

    player_vec.push_back(Nero);

    // creating a new player in heap storage
    Player *Enemy = {nullptr};

    Enemy = new Player;

    delete Enemy;

    // declarations
    Account russel_account;
    Account janny_account;


    return 0;
}