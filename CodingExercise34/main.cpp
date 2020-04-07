/*
    Given the provided Money class, please add the overloaded equality operators == and !=.
    These overloaded operators should return bool and should be implemented as member functions.
    Given 2 Money objects, consider them to be equal if both the dollars and cents attributes are same for both objects.
    First, add the overloaded operator function declarations to the Money class declaration in Money.h.
    Second, add the overloaded operator function definitions in Money.cpp.
    These overloaded functions should not modify the objects in any way.
*/

#include <stdio.h>
#include "Money.h"

using namespace std;

int main(void) {
    cout << boolalpha << endl;

    Money larry ("larry", 100, 35);
    Money moe ("moe", 100, 53);
    Money curly ("curly", 100, 35);

    larry.display();
    moe.display();
    curly.display();

    cout << "larry == moe =>" << (larry == moe) << endl;
    cout << "larry == curly =>" << (larry == curly) << endl;

    cout << "larry != moe =>" << (larry != moe) << endl;
    cout << "larry != curly =>" <<(larry != curly) << endl;

    return 0;
}