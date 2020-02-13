/* Passing Pointers to Function
    - Pass-by-Reference with Pointer Parameters
        -> Use Pointers as Function parameters and dereference operator to achieve pass-by-reference
    - Function Parameter is a Pointer
    - It can be a Pointer or address of a variable
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void double_data(int *p_value);
void swap_data(int *a, int *b);
void display(const vector <string> * v);
void display(const int *p_array, int sentinel);

int main(void) {
    int data {60};

    int *p_data = nullptr;          // Initializing Pointer to null pointer
    

    cout << "p_data Pointer is pointing to memory location " << &data << " having value " << data << "." << endl;

    double_data(&data);             // Function takes &data as an input parameter which is an address of data variable
    
    cout << "p_data Pointer is pointing to memory location " << &data << " having value " << data << "." << endl;

    p_data = &data;                 // Setting Pointer to Point to data

    double_data(p_data);            // Function takes Pointer p_data as an input parameter which is an address of data variable
    
    cout << "p_data Pointer is pointing to memory location " << p_data << " having value " << *p_data << "." << endl;

    cout << "==============================" << endl;

    int x {50}, y {100};

    cout << "x = " << x << " and y = " << y << endl;

    swap_data(&x, &y);              // Function takes &x and &y as input parameters

    cout << "taking addresses &x and &y as input in swap_data function" << endl;
    cout << "x = " << x << " and y = " << y << endl;

    int *p_x {&x}, *p_y {&y};
    swap_data(p_x, p_y);            // Function takes pointers p_x and p_y as input parameters

    cout << "taking pointers p_x and p_y as input in swap_data function" << endl;
    cout << "x = " << x << " and y = " << y << endl;

    vector <string> persons {"John", "Janny", "Larry"};

    cout << "Printing elements of Persons:" << endl;
    
    display(&persons);               // Function takes pointer to vector as input parameter
    int array [] {100, 95, 57, 85, 75, 10};
    cout << "Printing elements of array:" << endl;
    display(array, 75);             // Function takes array as input parameter

    return 0;
}

void double_data(int *p_value) {
    *p_value = *p_value * 2;        // expression *p_value *= 2 also does the same thing
}

void swap_data(int *a, int *b) {
    int temp {0};
    temp = *a;
    *a   = *b;
    *b   = temp;
}

void display(const vector <string> * v) {
    for (auto str : *v) {
        cout << str << " ";
    }
    cout << endl;
}

void display(const int *p_array, int sentinel) {
    
    while (*p_array != sentinel) {
        cout << *p_array << " ";
        p_array++;
    }
    cout << endl;
}