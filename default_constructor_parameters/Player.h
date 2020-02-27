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
public:
    // methods
    void set_name(std::string name_val) { 
        name = name_val; 
    }
    string get_name(void) {
        return name;
    }

    // constructor with default parameter values
    // Default Constructor - expects three arguments
    Player(std::string name_val = "None", int health_val = {0}, int xp_val = {0});

    // Player()     // Default Constructor - no arguments required
    // if this default constructor is implemented in the code, compiler throws error

    // Destructor - Only one - no return type
    ~Player(void) { 
        cout << "Destructor called for " << name << endl; 
    }
};


// Default Constructor - expects three arguments
Player::Player(std::string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp {xp_val} {                            // No change
    cout << "Three argument constructor called." << endl;
}

#endif