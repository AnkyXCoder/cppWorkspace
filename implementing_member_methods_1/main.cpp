// Implementing member methods 1 

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
    // inline declaration
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }
    void display_balance(void) { cout << name <<"'s Account Balance: " << balance << endl; };
    
    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name(void);
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n) {
    name = n;
    cout << "Account Name set to: " << name << endl;
}

string Account::get_name() {
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


int main() {
    Account frank_account;
    frank_account.set_name("Frank");
    frank_account.set_balance(1000.0);
    
    frank_account.deposit(200.0);
    frank_account.withdraw(500.0);
    frank_account.withdraw(1500.0);

    return 0;
}
