// Inheritance: Constructors and Destructors in Class
#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
   Base() : value{0} { cout << "Base no-args constructor" << endl; }
   Base(int x) : value{x} { cout << "Base (int) overloaded constructor" << endl; }
   ~Base(){ cout << "Base destructor" << endl; }
};

class Derived : public Base {
    using Base::Base;
private:
    int doubled_value;
public:
    Derived() : doubled_value {0} { cout << "Derived no-args constructor " << endl; } 
    Derived(int x) : doubled_value {x*2}  { cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor " << endl; } 
};

int main() {
	cout << "Output for Base Object a" << endl;
	Base a;
	
	cout << "Output for Base Object b" << endl;
	Base b{100};
	
	cout << "Output for Base Object c" << endl;
	Derived c;

	cout << "Output for Base Object d" << endl;
	Derived d {1000};
    
    return 0;
}