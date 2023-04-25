#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    std::string name;
    int health;
    int xp;
    int *mana;

public:
    // methods
    void set_name(std::string name_val) { name = name_val; }
    string get_name(void) {return name; }
    int get_health(void) { return health; }
    int get_xp(void) { return xp; }
    void set_mana(int mana_val) { *mana = mana_val; }
    int get_mana(void) { return *mana; }


    // constructor with default parameter values
    // Default Constructor - expects four arguments
    Player(std::string name_val = "None", int health_val = {0}, int xp_val = {0}, int mana_val ={0});

    // Implementing the Copy Constructor
    // Deep Copy Constructor
    Player(const Player &source);

    // Implementing the Move Constructor
    // Move Constructor
    Player(Player &&source);

    // Destructor - Only one - no return type
    ~Player(void) {
        if (mana != nullptr) {
            cout << "Destructor freeing data for: " << name << endl;
        } else {
            cout << "Destructor called for nullptr." << endl; 
        }
        delete mana;
    }
};


// Default Constructor - expects four arguments
Player::Player(std::string name_val, int health_val, int xp_val, int mana_val)
: name{name_val}, health{health_val}, xp {xp_val} {
    mana = new int;
    *mana = mana_val;
    cout << "Four argument constructor called." << endl;
}

// Deep Copy Constructor
Player::Player(const Player &source)
: name{source.name}, health{source.health}, xp{source.xp} {
    mana = new int;                 // allocate a new storage
    *mana = *source.mana;           // copies the data into allocated memory
    cout << "Copy Constructor - made copy of: " << source.name << endl;
}

// Move Constructor
Player::Player(Player &&source)
: name{source.name}, health{source.health}, xp{source.xp} {
    mana = new int;
    *mana = *source.mana;
    source.mana = nullptr;
    cout << "Move Constructor - moving resources of : " << source.name << endl;
};


// Display Player Object
void display_player(Player p) {
    cout << "Player details are: " << endl;
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
    cout << "Mana: " << p.get_mana() << endl;
}

#endif