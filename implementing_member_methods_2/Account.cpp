#include "Account.h"

#include <iostream>
#include <string>

using namespace std;

void Account::set_name(std::string n) {
    name = n;
    cout << "Account Name set to: " << name << endl;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    balance = balance + amount;
    cout << "In deposit " << amount << " from " << name << "'s Account." << endl;
    cout << "Deposit OK" << endl;
    display_balance();
    return true;
}

bool Account::withdraw(double amount) {
    cout << "In withdraw " << amount << " from " << name << "'s Account." << endl;
    if (amount > balance || balance <= 1000) {
        cout << "You can't withdraw. Not enough balance." << endl;
        return false;
    } else {
        balance = balance - amount;
        cout << "Withdrawal OK" << endl;
        display_balance();
        if (balance <= 1000) {
            cout << "Low balance." << endl;
        }
        return true;
    }
}
