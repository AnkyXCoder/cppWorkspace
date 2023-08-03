/*
 * Class-level Exceptions
 *
 * Exception can be thrown from within a Class:
 *
 * Method:
 * - works exactly same as Functions
 *
 * Constructor:
 * - Constructors may fail
 * - Constructors do not return any value
 * - Throw an exception in the constructor if you cannot initialize an object
 *
 * Destructor:
 * - Do Not throw an exception from your Destructor
 *
 * */

#include "Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "I_Printable.h"
#include "IllegalBalanceException.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    std::vector<Account*> accounts;
    char selection{};
    do {

        cout << "\n-----------------------" << endl;

        cout << "C. Create a new Checking Account" << endl;
        cout << "S. Create a new Savings Account" << endl;
        cout << "T. Create a new Trust Account" << endl;
        cout << "Q. Quit" << endl;

        cout << "\nEnter your selection: ";

        cin >> selection;

        string acc_name;
        double acc_balance;
        switch(selection) {
        case 's':
        case 'S': {

            cout << "Enter Account Holder's name:";
            cin >> acc_name;

            cout << "Enter Account Balance:";
            cin >> acc_balance;

            try {
                Account* temp_account = new Savings_Account(acc_name, acc_balance);
                cout << *temp_account << endl;
                accounts.push_back(temp_account);
            }

            catch(const IllegalBalanceException& err) {
                cout << "Couldn't create Savings Account, Negative Balance provided." << endl;
            }
            break;
        }

        case 't':
        case 'T': {

            cout << "Enter Account Holder's name:";
            cin >> acc_name;

            cout << "Enter Account Balance:";
            cin >> acc_balance;

            try {
                Account* temp_account = new Trust_Account(acc_name, acc_balance);
                cout << *temp_account << endl;
                accounts.push_back(temp_account);
            }

            catch(const IllegalBalanceException& err) {
                cout << "Couldn't create Trust Account, Negative Balance provided." << endl;
            }
            break;
        }
        case 'c':
        case 'C': {

            cout << "Enter Account Holder's name:";
            cin >> acc_name;

            cout << "Enter Account Balance:";
            cin >> acc_balance;

            try {
                Account* temp_account = new Checking_Account(acc_name, acc_balance);
                cout << *temp_account << endl;
                accounts.push_back(temp_account);
            }

            catch(const IllegalBalanceException& err) {
                cout << "Couldn't create Checking Account, Negative Balance provided." << endl;
            }
            break;
        }

        case 'q':
        case 'Q': {
            cout << "You chose to quit - Quitting." << endl;
            break;
        }

        default: {
            cout << "Invalid selection. Repeating again." << endl;
            break;
        }
        }
    } while(selection != 'q' && selection != 'Q');

    display(accounts);

    cout << "Program Completed Successfully" << endl;

    return 0;
}