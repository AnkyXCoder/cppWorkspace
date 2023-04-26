// Polymorphism: Using Base class pointers

#include <iostream>
#include <vector>

class Account {
   public:
    void withdraw(double amount) {
	std::cout << "In Account::withdraw" << std::endl;
    }
    ~Account() {
    }
};

class Checking : public Account {
   public:
    void withdraw(double amount) {
	std::cout << "In Checking::withdraw" << std::endl;
    }

    ~Checking() {
    }
};

class Savings : public Account {
   public:
    void withdraw(double amount) {
	std::cout << "In Savings::withdraw" << std::endl;
    }
    ~Savings() {
    }
};

class Trust : public Account {
   public:
    void withdraw(double amount) {
	std::cout << "In Trust::withdraw" << std::endl;
    }
    ~Trust() {
    }
};

int main() {
    std::cout << "\n === Pointers ==== " << std::endl;
    Account* p1 = new Account();
    Account* p2 = new Savings();
    Account* p3 = new Checking();
    Account* p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "\n === Array ==== " << std::endl;
    Account* array[] = {p1, p2, p3, p4};
    for(auto i = 0; i < 4; ++i) {
	array[i]->withdraw(1000);
    }

    std::cout << "\n === Array ==== " << std::endl;
    array[0] = p4;
    for(auto i = 0; i < 4; ++i) {
	array[i]->withdraw(1000);
    }

    std::cout << "\n === Vector ==== " << std::endl;
    std::vector<Account*> accounts{p1, p2, p3, p4};
    for(auto acc_ptr : accounts)
	acc_ptr->withdraw(1000);

    std::cout << "\n === Vector ==== " << std::endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for(auto acc_ptr : accounts)
	acc_ptr->withdraw(1000);

    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
