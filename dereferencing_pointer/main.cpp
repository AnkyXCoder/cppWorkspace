/* Dereferencing a Pointer
Pointer means to access the memory location where the value is stored
Dereferenceing a pointer means to access the value of the pointer
*/


#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    
    int score {85};
    int *score_ptr {nullptr};
    score_ptr = &score;

    cout << "Value of score = " << score << endl;
    cout << "score is stored at memory location: " << &score << endl;
    
    //accessing score using pointer
    cout << "Value of score = " << *score_ptr << endl;      // pointer dereferencing
    cout << "score is stored at memory location; " << score_ptr << endl;    // pointer

    // updating and accessing score using variable
    score = 100;
    cout << "updated value of score by variable = " << score << endl;

    // updating score by pointer dereferencing
    *score_ptr = 120;
    cout << "updated value of score by pointer dereferencing = " << *score_ptr << endl;
    
    double high_temp {45.5}, low_temp {9.7};
    double *temp_ptr {nullptr};
    cout << "\nAccessing temperatures by pointer dereferencing method using single pointer: " << endl;
    temp_ptr = &high_temp;
    cout << "High Temperature is:" << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << "Low Temperature is:" << *temp_ptr << endl;
    
    string name {"Andy"};
    cout << "\nAccessing changed data using pointer dereferencing method: " << endl;
    string *name_ptr{&name};
    cout << "Name given is: " << *name_ptr << endl;
    cout << "Enter a new name: " << endl;
    cin >> *name_ptr;
    cout << "name is updated to: " << *name_ptr << endl;
    
    cout << "\nAccessing vectors using pointers and pointer dereferencing methods: " << endl;
    vector <string> people {"Harry", "Sally", "Stefan"};
    vector <string> *vec_ptr {nullptr};
    vec_ptr = &people;
    cout << "Vector of people is located at memory location: " << vec_ptr << endl;
    cout << "First person: " << (*vec_ptr)[0] << endl;
    cout << "Second person: " << (*vec_ptr).at(1) << endl;
    cout << "Third person: " << (*vec_ptr)[2] << endl;
    
    cout << "List of people: " << endl;

    for (auto people: *vec_ptr) {
        cout << people << endl;;
    }

    return 0;
}