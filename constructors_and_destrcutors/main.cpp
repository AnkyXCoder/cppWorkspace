/* Constrcutors and Destructors

    Constructors
    * Special Member Methods
    * Invoked during object creation or when pointer to an object is assigned
    * Useful for Initialization
    * Same name as the class
    * No return Type is specified
    * Can be overloaded
    
    Destructor
    * Special Member Method
    * Same name as the class precedded with a tilde (~)
    * Invoked automatically when object is destroyed or when pointer to an object is cleared
    * No return Type and no parameters
    * Only 1 destructor is allowed per class, hence cannot be overloaded
    * Useful to release memory and other sources
*/

#include <iostream>
#include <string>
#include "Player.h"

int main() {

    // Note how Constructos and Destructors are called
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}

