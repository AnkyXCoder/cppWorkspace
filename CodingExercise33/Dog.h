#ifndef __DOG_H__
#define __DOG_H__
#include <string>


using namespace std;

class Dog {
private:
    // attributes
    string name;
    int age;
public:
    // Default constructor - expects no arguments
    Dog(void) {
        name = "None";
        age = 0;
        cout << "Default constructor is called." << endl;
    };

    // Copy Constructor
    Dog(const Dog &source);

    // Overloaded constructor - expects two arguments
    Dog(std::string dog_name, int dog_age) {
        name = dog_name;
        age = dog_age;
        cout << "Overloaded constructor is called." << endl;
    }

    // methods
    string get_name(void) { return name; };
    bool set_name(string name_input) { name = name_input; };
    int get_age(void) { return age; };
    bool set_age(int age_input) { age = age_input; };
    double get_human_years() { return (age * 7); };
    string speak() { string response = "Woof"; return response; };
    
};

// Copy Constructor
Dog::Dog(const Dog &source)
: name{source.name}, age{source.age}{
    cout << "Copy Constructor called. made copy of: " << source.name << endl;
}

#endif 