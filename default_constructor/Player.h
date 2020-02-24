#ifndef __PLAYER_H__
#define __PLAYER_H__

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
    // Default Constructor - no arguments
    // Player(void) { 
    //     name = "none";
    //     health = 100;
    //     xp = 3;
    //     cout << "Default constructor called."<< endl;
    // }

    // Default Constructor - expects three arguments
    Player(std::string name_val, int health_val, int xp_val) {
        name = name_val;
        health = health_val;
        xp = xp_val;
        cout << "Three argument constructor called." << endl;
    }

    // Destructor - Only one - no return type
    ~Player(void) { 
        cout << "Destructor called for " << name << endl; 
    }
};

#endif