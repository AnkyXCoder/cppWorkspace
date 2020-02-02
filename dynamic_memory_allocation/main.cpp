/* Dynamic Memory Allocation

- to allocate storage for a variable at runtime.

Recalling use of Arrays:
- while defining an Array, its name and size are required.
- once size is specified, numbers of elements on array are fixed.
- calling array in a function, pointer to first element is passed.

Recalling use of Vectors:
- while defining a Vector, its name and type of vector are required.
- once type is specified, type of elements of vector are fixed.
- calling vector in a function, pointer to first element is passed.
- numbers of elements are not fixed, vectors grows and shrinks dynamically.

Pointers can be used to access newly allocated heap storage.
*/

#include <iostream>

using namespace std;

int main(void) {
    
    int *p_value {nullptr};

    cout << "allocated memory location in heap -> p_value: " << p_value << endl;

    // using "new" keyword to allocate heap storage
    p_value = new int;      // allocate storage for an integer in heap
    cout << "allocated memory location in heap -> p_value: " << p_value << endl;
    cout << "alloacted value in heap memory location -> *p_value: " << *p_value << endl;

    *p_value = 100;
    cout << "new value assigned to -> *p_value: " << *p_value << endl;

    // using delete to deallocate heap storage
    delete p_value;     // frees the allocated storage in heap
    cout << "deallocated memory location in heap -> p_value: " << p_value << endl;
    cout << "dealloacted value in heap memory location -> *p_value: " << *p_value << endl;


    // using new[] to allocate storage for an array
    int *p_array {nullptr};
    int size {};

    cout << "allocated memory location in heap -> p_array: " << p_array << endl;

    cout << "How big do you want the array?" << endl;
    cin >> size;
    p_array = new int[size];    // allocate array on heap

    cout << "Array of size " << size << " is allocated in heap memory at: " << p_array << endl;
    cout << "alloacted value in heap memory location -> *p_array: " << *p_array << endl;

    delete [] p_array;      // frees the allocated storage to array
    cout << "dealloacted value in heap memory location -> *p_array: " << *p_array << endl;
    return 0;
}