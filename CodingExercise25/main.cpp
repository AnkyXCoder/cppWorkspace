/* Write a program to print the guest list to an event and clear the guest list after the event is over.
*/

// Pre-processor directives
#include <iostream>

using namespace std;

// Function Prototypes
void print_guest_list(const string array[], size_t nos_of_guest);
void clear_guest_list(string array[], size_t nos_of_guest, string clear_to);

// Main loop
int main (void) {
    string guest_list[] = {"Ankit", "Hemangi", "Diyana", "Jinish", "Mom"};
    print_guest_list(guest_list, 5);
    clear_guest_list(guest_list, 5, " ");
    print_guest_list(guest_list, 5);
    return 0;
}

// Function Definitions
void print_guest_list(const string array[], size_t nos_of_guest) {
    cout << "List of Guests: " << endl;
    for (size_t i = 0; i < nos_of_guest; i++) {
        cout << array[i] << endl;
    }
    cout << "\nEnd of the guest list.\n" << endl;
}

void clear_guest_list(string array[], size_t nos_of_guest, string clear_to) {
    cout << "Clearing list...." << endl;
    for (size_t i = 0; i < nos_of_guest; i++) {
        array[i] = clear_to;
    }
    cout << "List cleared.\n" << endl;
}