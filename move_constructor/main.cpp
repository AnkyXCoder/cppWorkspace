/* Move Constructor

    When it is useful?
    * sometimes copy constructors are called many times automatically due to copy semantics of C++
    * Copy Constructors doing Deep copying can have a significant performance bottleneck
    * C++11 introduced move semantics and the Move Constructor
    * Move Construcotr moves an object rather than copy it.
    * Optional but recommended when you have a raw pointer.
    * Copy elison - C++ may optimize copying away completely (RVO - Return Value Optimization)

    R- value references
    * used in move semantics and perfect forwarding
    * move semantics is all about r-value references
    * used by move constructor and move assignement operatorto efficiently move an object rather than copy it.
    * R-value reference operator (&&)

    What does it do?
    * Instead of making a deep copy of the move constructor
        - 'moves' the resource
        - copies the address of the resource from source to the current object
        - nulls out the the pointer in the source pointer
*/

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

int main(void) {
    vector <Player> vec;

    vec.push_back(Player("Rock", 100, 10, 50));

    vec.push_back(Player("John", 100, 12, 40));

    vec.push_back(Player("Brock", 100, 15, 45));

    vec.push_back(Player("Mayor", 100, 12, 50));

    vec.push_back(Player("Dante", 100, 18, 60));


    return 0;
}