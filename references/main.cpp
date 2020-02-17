/* References
    - an alias for a variable
    - must be initialized to a variable when declared
    - cannot be null
    - once initialized cannot be made to refer to another variable
    - very useful as function parameters
    - might be considered as a constant pointer that is automatically dereferenced
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {

    vector <string> person_name {"John", "Earl", "Russel"};

    cout << "Actual list of names:" << endl;
    for(auto str:person_name) {
        cout << str << " ";
    }
    cout << endl;

    // Displaying the contents of vector
    for(auto str:person_name) {
        str = "Funny";              // str is a copy of each vector element and changed here, actual vector is not changed
    }
    cout << endl;

    cout << "List of names:" << endl;
    for(auto str:person_name) {
        cout << str << " ";
    }
    cout << endl;

    // Displaying the contents of vector using reference
    for(auto &str:person_name) {    // note the & sign for reference to memory location to vector
        str = "Funny";              // This changes the element of the main vector
    }
    cout << endl;

    cout << "List of names:" << endl;
    for(auto const &str:person_name) {
        cout << str << " ";
    }
    cout << endl;

    // Using const qualifier generates the compiler error
    /*
    for(auto const &str:person_name) {    // note the & sign for reference to memory location to vector
        str = "Funny";              // This changes the copy of the main vector
    }
    cout << endl;
    */


    return 0;
}