/* 
- the value of an array name is the address of the first element in the array
- the value of a pointer variable is an address
- if the pointer points to the same data type as the array element then the pointer and the array name can be used interchangeably

    int array_name[] {1,2,3,4,5}
    int *pointer_name{array_name}

    subscript notation                      offset notation
    array_name[index]                       *(array_name + index)
    pointer_name[index]                     *(pointer_name + index)
*/

#include <iostream>

using namespace std;

int main(void) {
    
    int scores[] {100, 98, 99};
    cout << scores << endl;     // prints the memory location of the first element
    cout << *scores << endl;

    cout << "\nArray subscript notation: " << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    int *p_scores {nullptr};
    p_scores = scores;          // note the assignement
    cout << p_scores << endl;
    cout << *p_scores << endl;
    
    cout << "\nPointer subscript notation: " << endl;
    // accessing array elements using pointer
    cout << p_scores[0] << endl;
    cout << p_scores[1] << endl;
    cout << p_scores[2] << endl;

    // getting memory location of pointers
    cout << p_scores + 0 << endl;
    cout << p_scores + 1 << endl;
    cout << p_scores + 2 << endl;

    cout << "\nArray offset notation: " << endl;
    // accessing memory locations of array using pointer dereferencing
    cout << *(scores + 0) << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    cout << "\nPointer offset notation: " << endl;
    // accessing memory locations of pointers using pointer dereferencing
    cout << *(p_scores + 0) << endl;
    cout << *(p_scores + 1) << endl;
    cout << *(p_scores + 2) << endl;

    return 0;
}