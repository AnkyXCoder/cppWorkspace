/* Arrays and Functions

    Whenever an array name is passed to a function, array is not copied, but the address (location in memory) of the first element of an array is passed to a function.

    so, the function has no idea how many elements are in the given array.
*/


#include <iostream>

using namespace std;

// We are passing  the location of the array, hence the following function can modify the contents of the array by accessing the location of each element.
void print_array(const int array_name[], size_t elements_of_array);
// to prevent any function to edit/modify the contents of the array, use "const" keyword, which tells the copmpiler that the parameters are read-only and any attempt to modify the parameters, compiler generates error
void zero_array(int array_name[], size_t elements_of_array);
void set_array(int array_name[], size_t elements_of_array, int set_value);

int main (void) {
    int my_numbers[] = {8, 2, 3, 4, 5};
    print_array(my_numbers, 5);
    cout << endl;
    zero_array(my_numbers, 5);
    cout << "All the elements of array are zeroed out." << endl;
    print_array(my_numbers, 5);
    cout << endl;
    set_array(my_numbers, 5, 100);
    cout << "All the elements of array are set to 100." << endl;
    print_array(my_numbers, 5);
    cout << endl;
    return 0;
}

void print_array(const int array_name[], size_t elements_of_array) {
    cout << "Elements of the given array are: [";
    for (size_t i = 0; i < elements_of_array; i++) {
        cout << " " << array_name [i];
    }
    cout << "]" << endl;
}

void zero_array(int array_name[], size_t elements_of_array) {
    for (size_t i = 0; i < elements_of_array; i++) {
        array_name[i] = 0;
    }
}

void set_array(int array_name[], size_t elements_of_array, int set_value) {
    for (size_t i = 0; i < elements_of_array; i++) {
        array_name[i] = set_value;
    }
}