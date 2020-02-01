/* Pointers
Pointer is a veriable that stores the memory location of
The variable it is referencing to as a data.
Pointers can store the memory location of a function.
Inside a function, pointers can be used to access data that are defined out of the function. Those variables may not be defined in the scope.

Pointer Declaration 
variable_type *variable_name

syntax to use pointer               this also works
int *int_ptr                        int* int_ptr
char *char_ptr                      char* char_ptr
double *double_ptr                  double* double_ptr
string *string_ptr                  string* string_ptr

Types of Pointers
NULL Pointer, void Pointer, wild Pointer, dangling Pointer

the address operator (&)
points to the address of its operand
*/

#include <iostream>

using namespace std;

int main(void) {
    int num{0};
    cout << "Value of num: " << num << endl;
    cout << "num is stored in memory location: " << &num << endl;
    cout << "Enter a new value for num: ";
    cin >> num;
    cout << "New value of num: " << num << endl;
    cout << "num memory location " << &num << " is updated with the value: " << num << endl;

    // Initializing a Pointer
    // Compare the size of a declared pointer and a value it points to.
    int *p1;
    cout << "Value of p1 is: " << p1 << endl;
    cout << "Address of p1 is: " << &p1 << endl;
    cout << "Size of p1 is: " << sizeof(p1) << endl;
    p1 = nullptr;
    cout << "Value of p1 is: " << p1 << endl;

    double *p2;
    cout << "Value of p2 is: " << p2 << endl;
    cout << "Address of p2 is: " << &p2 << endl;
    cout << "Size of p2 is: " << sizeof(p2) << endl;
    p2 = nullptr;
    cout << "Value of p2 is: " << p2 << endl;

    string *p3;
    cout << "Value of p3 is: " << p3 << endl;
    cout << "Address of p3 is: " << &p3 << endl;
    cout << "Size of p3 is: " << sizeof(p3) << endl;
    p3 = nullptr;
    cout << "Value of p3 is: " << p3 << endl;

    unsigned long long *p4;
    cout << "Value of p4 is: " << p4 << endl;
    cout << "Address of p4 is: " << &p4 << endl;
    cout << "Size of p4 is: " << sizeof(p4) << endl;
    p4 = nullptr;
    cout << "Value of p4 is: " << p4 << endl;

    int score {100};
    double temperature {37.5};
    int *score_ptr {nullptr};
    cout << "score is: " << score << endl;
    cout << "Address of score is: " << score_ptr << endl;
    cout << "score_ptr is initialized with \"nullptr\" pointing to: " << score_ptr << endl;
    score_ptr = &score;
    cout << "after initialization, score_ptr is pointing to: " << score_ptr << endl;
    // score_ptr = &temperature;   // compiler will show an error as score_ptr is of type integer and temperature is of type double;

    // Instead consider this example where the variables are of same types
    double high_temp {50};
    double low_temp {20.5};
    double *temp_ptr {nullptr};
    cout << "high_temp is " << high_temp << " and is stored at memory location " << &high_temp << endl;
    cout << "low_temp is " << low_temp << " and is stored at memory location " << &low_temp << endl;
    cout << "temp_ptr is initialized with \"nullptr\" pointing to memory location: " << temp_ptr << endl;
    temp_ptr = &high_temp;
    cout << "temp_ptr is pointing to: " << temp_ptr << " and is having value memory location: " << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << "temp_ptr is pointing to: " << temp_ptr << " and is having value: " << *temp_ptr << endl;
}
