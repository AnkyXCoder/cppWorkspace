/* Pass by reference
    
    When a parameter is passed to a function, the default is "Pass by Value".
    Which means we are actually sending a copy of that particular parameter to the function.
    hence, the paramter value remains unchanged outside the function.
    We'll understand this by an example.

    Sometimes, we want to change the value of the parameter passed to the function. In order to achieve this, we need the location of the actual parameter (not the copy).
    Hence, in "Pass by Reference", we can use reference parameters to tell the compiler to pass in a reference to the actual parameter.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void scale_number(int num);
void scale_number_2(int &num);
void pass_by_ref1(int &num);
void pass_by_ref2(string &str);
void print_vector(const vector <int> &v);
void clear_vector(vector <int> &v);

int main(void) {
    vector <int> vec = {1,2,3,4,5};
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

    int num1 {10}, num2 {20};
    cout << "num1 before calling pass_by_ref1: " << num1 << endl;
    pass_by_ref1(num1);
    cout << "num1 after calling pass_by_ref1: " << num1 << endl;

    cout << "num2 before calling pass_by_ref1: " << num2 << endl;
    pass_by_ref1(num2);
    cout << "num2 after calling pass_by_ref1: " << num2 << endl;

    string name {"Ankit"};
    cout << "name before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2: " << name << endl;

    print_vector(vec);
    clear_vector(vec);
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

void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &str) {
    str = "changed";
}

void print_vector(const vector <int> &v) {
    cout << "Printing data of vector: " << endl;
    for (auto num : v) {
        cout << num << " ";
    }
    cout << endl;
}

void clear_vector(vector <int> &v) {
    cout << "Clearing data of vector...." << endl;
    v.clear();
    cout << "Vector cleared." << endl;
    print_vector(v);
}