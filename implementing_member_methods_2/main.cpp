// Implementing member methods 2
#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account frank_account;
    frank_account.set_name("Frank");
    frank_account.set_balance(1000.0);

    frank_account.deposit(200.0);
    frank_account.withdraw(500.0);
    frank_account.withdraw(1500.0);
    
    return 0;
}

