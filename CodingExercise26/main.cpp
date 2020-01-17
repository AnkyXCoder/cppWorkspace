/* Write a program to print the guest list to an event and clear the guest list after the event is over using Pass by Reference method.
*/

// Pre-processor directives
#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3);
void clear_guest_list(string &guest_1, string &guest_2, string &guest_3);

// Main loop
int main (void) {
    string guest_1 {"Larry"};
    string guest_2 {"Moe"};
    string guest_3 {"Curly"};

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);

    return 0;
}

// Function Definitions
void print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3) {
    cout << guest_1 << "\n" << guest_2 << "\n" << guest_3 << endl;
}

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3) {
    guest_1 = guest_2 = guest_3 = " ";
}