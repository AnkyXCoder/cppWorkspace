/* Returning a Pointer from a Function
    - Functions can also return Pointers
        type * function();
    - Should return pointers to 
        -> Memory dynamically allocated in the function
        -> To data that was passed in
    - Never return a pointer to a local function variable.
*/

#include <iostream>

using namespace std;

int *largest_value(int *p_value1, int *p_value2);
int *create_array(size_t size, int init_value = 0);
void display_array(const int * const array, size_t size);

int main(void) {
    int value1{0}, value2{0};

    int *p_largest_value {nullptr};

    cout << "Enter two integer values (separated by a space) to compare:";
    cin >> value1 >> value2;

    cout << "Comparing two values..." << endl;

    p_largest_value = largest_value(&value1, &value2);

    cout << "Largest value is: " << *p_largest_value << endl;

    int *my_array {nullptr};
    int size{0}, init_value{0};

    cout << "How many integers would you like to allocate?" << endl;
    cin >> size;
    cout << "What would you like to initialize to?" << endl;
    cin >> init_value;

    my_array = create_array(size, init_value);        // allocate memory for array and return pointer to memory location

    display_array (my_array, size);
    delete [] my_array;                     // frees the memory allocated

    return 0;
}

int *largest_value(int *p_value1, int *p_value2) {
    if (*p_value1 > *p_value2) {
        return p_value1;
    } else {
        return p_value2;
    }
}

int *create_array(size_t size, int init_value) {
    int *new_storage {nullptr};

    new_storage = new int[size];

    for (size_t i = 0; i < size; i++) {
        *(new_storage + i) = init_value;
    }

    cout << "Array created sucessfully." << endl;

    return new_storage;
}

void display_array(const int *const array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}