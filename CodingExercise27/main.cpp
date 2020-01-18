/*  Write a program that accumulates the total_amount of money that will be accumulated if you start with a Rupees and double it everyday for n number of days.
*/

// Pre-processor Directives
#include <iostream>

using namespace std;

// Function Prototypes
double a_paisa_doubled_everyday(int days, double rupees_value);

// Main Function
int main (void) {

    int numbers_of_days {};
    cout <<  "Enter number of days to be acuumulated for Rupees: ";
    cin >> numbers_of_days;
    double initial_rupees_amount{};
    cout << "Enter amount of money on day 1: ";
    cin >> initial_rupees_amount;
    double total_amount{};
    total_amount = a_paisa_doubled_everyday(numbers_of_days, initial_rupees_amount);
    cout << "Total amount on the last day: " << total_amount << endl;
    return 0;
}

// Function Definitions
double a_paisa_doubled_everyday(int days, double rupees_value) {
    if (days == 1) {
        return rupees_value;
    }
    days--;
    return (2 * a_paisa_doubled_everyday(days, rupees_value));
}