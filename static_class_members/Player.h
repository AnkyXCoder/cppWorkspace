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
    static int num_players;     // can not initialize here, ERROR

public:
    // methods
    void set_name(std::string name_val) { name = name_val; }
    string get_name(void) {return name; }
    int get_health(void) { return health; }
    int get_xp(void) { return xp; }
    int set_mana(int mana_val) { *mana = mana_val; }
    int get_mana(void) { return *mana; }
    static int get_num_players(void);

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
        -- num_players;
    }
};

#endif