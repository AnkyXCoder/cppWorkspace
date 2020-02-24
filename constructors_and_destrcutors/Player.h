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
    // Overloaded Constructors - no return type
    Player(void) { 
        cout << "No args constructor called"<< endl;
    }
    Player(std::string name) { 
        cout << "String arg constructor called"<< endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called"<< endl; 
    }

    // Destructor - Only one - no return type
    ~Player(void) { 
        cout << "Destructor called for " << name << endl; 
    }
};

#endif