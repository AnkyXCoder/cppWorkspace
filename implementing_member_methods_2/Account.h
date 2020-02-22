#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_


#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    // attributes
    string name;
    double balance;
    
public:
    // methods
    // declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }
    void display_balance(void) { cout << name <<"'s Account Balance: " << balance << endl; };
    
    
    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name(void);
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _ACCOUNT_H_
