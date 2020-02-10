/* Pointer Arithmatic
    Pointers can be used in 
    - Assignment Expressions
    - Arithmatic Expression
    - Comparison Expression
Pointer Arithmatic makes sense with raw arrays
method - 1:
p_value++ increments and p_value-- decrements a pointer to point to next or previous pointer value or array element respectively.
method - 2:
+ increment pointer by (n * size of pointer)  => p_value += n  => p_value = p_value + n
- decrement pointer by (n * size of pointer)  => p_value -= n  => p_value = p_value - n

    Subtracting two pointers
    - if both pointers are of same data type, subtracting two pointers gives the number of elements between the pointers

    Comparing two pointers
    - Determines if both the pointers points to the same memory location or address
    - doesn't compare the contents of the memory location or address
        - p_value1 == p_value2
        - p_value1 != p_value2

    Comparing the data pointers points to
    - determins if the two pointers points to the same data
    - *p_value1 = *p_value2
*/


#include <iostream>

using namespace std;

int main(void) {

    int scores[] = {100, 95, 58, 64, 75, 86, 50, 45, 40, -1};
    int *p_scores = nullptr;
    
    p_scores = scores;              // setting the pointer to first element of array
    
    cout << "Sentinel value is nothing but a terminator element." << endl;

    // Method - 1
    cout << "Looping until the sentinel value (-1)" << endl;
    while (*p_scores != -1) {
        cout << *p_scores << endl;
        p_scores++;
    }

    p_scores = scores;              // resetting the pointer
    cout << "Looping until the sentinel value (40)" << endl;
    while (*p_scores != 40) {
        cout << *p_scores << endl;
        p_scores++;
    }

    p_scores = scores;              // resetting the pointer
    cout << "Looping until the sentinel value (86)" << endl;
    while (*p_scores != 86) {
        cout << *p_scores << endl;
        p_scores++;
    }

    cout << "\n=============================" << endl;

    // Method - 2
    cout << "Looping until the sentinel value (-1)" << endl;
    p_scores = scores;              // resetting the pointer
    while(*p_scores != -1) {
        cout << *p_scores++ << endl;
    }
    
    cout << "\n=============================" << endl;
    string s1 {"Mars"};
    string s2 {"Earth"};
    string s3 {"Earth"};

    string *p1 {&s1};              // setting the pointer p1 to point to string s1
    string *p2 {&s2};              // setting the pointer p2 to point to string s2
    string *p3 {&s1};              // setting the pointer p3 to point to string s1

    cout << boolalpha;              // setting the compiler to give logical output

    cout << "Comparing pointers:" << endl;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;		// false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;		// true

    cout << "Comparing the data pointers point to:" << endl;
    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;		// true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// true
    
    p3 = &s3;   // resetting the pointer to point to Earth
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// false
    

    cout << "\n=============================" << endl;
    char name[] {"John"};
    
    char *p_name1 {nullptr};
    char *p_name2{nullptr};
    
    p_name1 = &name[0];   // J
    p_name2 = &name[3];   // n

    cout << "Calculating the number of elements between two pointers:" << endl;
    cout << "In the string " << name << ", " << *p_name2 << " is " << (p_name2 - p_name1) << " characters away from " <<  *p_name1  << endl; 
    
    char name1[] = {"Superman"};

    p_name1 = &name1[0];   // S
    p_name2 = &name1[5];   // n

    cout << "In the string " << name1 << ", " << *p_name2 << " is " << (p_name2 - p_name1) << " characters away from " <<  *p_name1  << endl;

    cout << endl;

    return 0;
}