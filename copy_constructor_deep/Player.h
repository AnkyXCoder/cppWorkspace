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
    int set_mana(int mana_val) { *mana = mana_val; }
    int get_mana(void) { return *mana; }


    // constructor with default parameter values
    // Default Constructor - expects three arguments
    Player(std::string name_val = "None", int health_val = {0}, int xp_val = {0}, int mana_val ={0});

    // Implementing the Copy Constructor
    // Shallow Copy Constructor
    Player(const Player &source);

    // Destructor - Only one - no return type
    ~Player(void) { 
        delete mana;
        cout << "Destructor called for " << name << endl; 
    }
};


// Default Constructor - expects three arguments
Player::Player(std::string name_val, int health_val, int xp_val, int mana_val)
: name{name_val}, health{health_val}, xp {xp_val} {
    mana = new int;
    *mana = mana_val;
    cout << "Three argument constructor called." << endl;
}

// Deep Copy Constructor method 1
Player::Player(const Player &source)
: name{source.name}, health{source.health}, xp{source.xp} {
    mana = new int;                 // allocate a new storage
    *mana = *source.mana;           // copies the data into allocated memory
    cout << "Copy Constructor - made copy of: " << source.name << endl;
}


// Display Player Object
void display_player(Player p) {
    cout << "Player details are: " << endl;
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
    cout << "Mana: " << p.get_mana() << endl;
}

#endif