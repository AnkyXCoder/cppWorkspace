
#include <iostream>
#include <string>
#include "Player.h"

int Player::num_players {0};

int Player::get_num_players(void) {
    return num_players;
}

// Default Constructor - expects four arguments
Player::Player(std::string name_val, int health_val, int xp_val, int mana_val)
: name{name_val}, health{health_val}, xp {xp_val} {
    mana = new int;
    *mana = mana_val;
    ++ num_players;
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