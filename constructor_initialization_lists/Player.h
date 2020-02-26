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


    // Default Constructor - expects no arguments
    Player(void);

    // Default Constructor - expects one arguments
    Player(std::string name_val);

    // Default Constructor - expects two arguments
    Player(std::string name_val, int xp_val);

    // Default Constructor - expects three arguments
    Player(std::string name_val, int health_val, int xp_val);

    // Destructor - Only one - no return type
    ~Player(void) { 
        cout << "Destructor called for " << name << endl; 
    }
};

// Default Constructor - expects no arguments
Player::Player()
: name {"None"}, health {0}, xp {0} {                                       // Better Method
    // Previous method
    // assignment of values to attributes, not initialized
    // name = "none";
    // health = 100;
    // xp = 0;
    cout << "Default constructor called."<< endl;
}

// Default Constructor - expects one arguments
Player::Player(string name_val)
: name {name_val}, health {0}, xp {0} {                                     // Better Method
    // Previous method
    // assignment of values to attributes, not initialized
    // name = name_val;
    // health = 100;
    // xp = 0;
    cout << "One argument constructor called."<< endl;
}

// Default Constructor - expects two arguments
Player::Player(std::string name_val, int xp_val)
: name{name_val}, health {0}, xp {xp_val} {                                 // Better Method
    // Previous method
    // assignment of values to attributes, not initialized
    // name = name_val;
    // health = 100;
    // xp = xp_val;
    cout << "Two argument constructor called."<< endl;
}

// Default Constructor - expects three arguments
Player::Player(std::string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp {xp_val} {                         // Better Method
    // Previous method
    // assignment of values to attributes, not initialized
    // name = name_val;
    // health = health_val;
    // xp = xp_val;
    cout << "Three argument constructor called." << endl;
}

#endif