/* Function Parameters
 * when a function is called, data can be passed to that function
 * In function call, these inputs are called arguments
 * In function definitions, these are called parameters
 * these inputs must match in number, order and in type
 * 
 * Pass-by-value
 * when you pass data into a function it is passed-by-value
 * a copy of the data is passed to the function
 * whtever changes you make to the parameter in the function header does not affect the argument that was passed in to the function
 * 
 * Formal parameters - the parameters defined in the function header
 * Actual paramters - the parameters used in the function call, the arguments
 * 
 * 
 * */


#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector <string> v);
void print_vector(vector <string> v);

int main(){
    int num {10};
    int another_num {20};
    
    cout << "\nWhen integer is used as an argument" << endl;
    cout << "====================================" << endl;
    cout << "/nnum before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "/nnum before calling pass_by_value1: " << num << endl;
    pass_by_value1(another_num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nWhen string is used as an argument" << endl;
    cout << "====================================" << endl;
    string name {"Ankit"};
    
    cout << "/nnum before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "num after calling pass_by_value2: " << name << endl;
    
    cout << "\nWhen vector is used as an argument" << endl;
    cout << "====================================" << endl;
    
    vector <string> persons {"Frank", "Larry", "Pearl"};
    
    cout << "persons before calling pass_by_value3: ";
    print_vector(persons);
    pass_by_value3(persons);
    cout << "persons after calling pass_by_value3: ";
    print_vector(persons);

    return 0;
}



void pass_by_value1(int num) {
    cout << "num after entering pass_by_value1: " << num << endl;
    num = 1000;
    cout << "num before leaving pass_by_value1: " << num << endl;
}

void pass_by_value2(string s) {
    cout << "name after entering pass_by_value2: " << s << endl;
    s = "Jinish";
    cout << "name before leaving pass_by_value2: " << s << endl;
}

void pass_by_value3(vector <string> v) {
    cout << "persons after entering pass_by_value3: ";
    print_vector(v);
    v.clear();
    cout << "persons before leaving pass_by_value3: ";
    print_vector(v);
}

void print_vector(vector <string> v) {
    for (auto s: v) {
        cout << s << " ";
    }
    cout  << endl;
}