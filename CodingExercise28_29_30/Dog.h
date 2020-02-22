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
    // methods
    string get_name(void) { return name; };
    bool set_name(string name_input) { name = name_input; };
    int get_age(void) { return age; };
    bool set_age(int age_input) { age = age_input; };
    double get_human_years() { return (age * 7); };
    string speak() { string response = "Woof"; return response; };
    
};
#endif 