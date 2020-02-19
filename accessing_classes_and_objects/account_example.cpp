/* Accessing Classes and Objects
    - access class
    - access methods
    If we have an object, we can access members using dot (.) operator
    If we have a pointer to an object, we can access members using
        * dereference the pointer and then using dot (.) operator
        * using arrow (->) operator

    Some class members will not be accessible
    we need an object to access instance variables
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account{
public:
    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    void display_balance(void) {
        cout << name <<"'s Account Balance: " << balance << endl;
    };
    bool deposit(double ammount) {
        balance = balance + ammount;
        cout << "In deposit " << ammount << " from " << name << "'s Account." << endl;
        display_balance();
    };
    bool withdraw(double ammount) {
        cout << "In withdraw " << ammount << " from " << name << "'s Account." << endl;
        if (ammount > balance || balance <= 1000) {
            cout << "You can't withdraw. Not enough balance." << endl;
        } else {
            balance = balance - ammount;
            display_balance();
            if (balance <= 1000) {
                cout << "Low balance." << endl;
            }
        }
    };
};

int main(void) {

    // declarations
    Account russel_account;
    Account janny_account;

    russel_account.name = "Russel";
    russel_account.balance = 5000.0;

    janny_account.name = "Janny";
    janny_account.balance = 10000.0;

    russel_account.display_balance();
    janny_account.display_balance();

    russel_account.withdraw(2000);
    russel_account.deposit(5000);
    
    janny_account.deposit(2000);
    janny_account.withdraw(11000);
    janny_account.withdraw(500);

    return 0;
}