/* Pass by reference
    
    When a parameter is passed to a function, the default is "Pass by Value".
    Which means we are actually sending a copy of that particular parameter to the function.
    hence, the paramter value remains unchanged outside the function.
    We'll understand this by an example.

    Sometimes, we want to change the value of the parameter passed to the function. In order to achieve this, we need the location of the actual parameter (not the copy).
    Hence, in "Pass by Reference", we can use reference parameters to tell the compiler to pass in a reference to the actual parameter.
*/

#include <iostream>

using namespace std;

void scale_number(int num);
void scale_number_2(int &num);

int main(void) {
    int numeric_value {0};
    cout << "Enter an integer number: ";
    cin >> numeric_value;
    cout << "You've entered: " << numeric_value << endl;
    scale_number(numeric_value);
    cout << "Now, the value is: " << numeric_value << endl;
    cout << "The value should have change to 100. Is it changed?" << endl;
    cout << "Now, this function will do the work." << endl;
    scale_number_2(numeric_value);
    cout << "Now, the value is: " << numeric_value << endl;
    return 0;
}

void scale_number(int num) {
    cout << "You've given me: " << num << endl;
    if (num > 100) {
        num = 100;
        cout << "I've updated the given number to: " << num << endl;
    } else {
        cout << "I haven't updated the given number." << num << endl;
    }
}

void scale_number_2(int &num) {
    cout << "You've given me: " << num << endl;
    if (num > 100) {
        num = 100;
        cout << "I've updated the given number to: " << num << endl;
    } else {
        cout << "I haven't updated the given number." << num << endl;
    }
}