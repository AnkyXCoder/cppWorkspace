/*
 * Section 18 Challenge
 * For this challenge we want to integrate our own user-defined exception classes into the Account class hierarchy.
 *
 * The account classes are provided for you.
 * Also, the IllegalBalanceException.h file contains the declaration for the IllegalBalanceException class.
 *
 * What I would like you to do is:
 * 1. Derive IllegalBalanceException from std::exception and implement the what() method to provide an exception
 * message. This exception object should be thrown from the Account class constructor if an account object is created
 * with a negative balance.
 *
 * 2. Derive InsufficentFundsException from std::exception and implement the what() method to provide an exception
 * message. This exception object should be thrown if a withdraw results in a negative balance. You should throw this
 * exception object from the Account withdraw method.
 *
 * */

#include "Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "I_Printable.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    
    std::unique_ptr<Account> moes_account;
    std::unique_ptr<Account> larry_account;
    
    try {
        moes_account = std::make_unique<Savings_Account>("moes", -5000);
        cout << *moes_account << endl;
    }

    catch (const IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    }

    try {
        larry_account = std::make_unique<Savings_Account>("larry", 5000);
        cout << *larry_account << endl;
        
        larry_account->withdraw(4000);
        cout << *larry_account << endl;
        
        larry_account->withdraw(1500);
        cout << *larry_account << endl;
    }
    
    catch (const IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    }

    catch (const InsufficientFundsException &ex) {
        cerr << ex.what() << endl;
    }

    cout << "Program completed successfully." << endl;
    return 0;
}