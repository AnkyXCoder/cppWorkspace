/* 
 * Default Arguments
 * */


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//function prototypes
double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

int main(){
    double cost {0};
        
    cout << fixed << setprecision(2);
    
    cost = calc_cost(100.0, 0.08, 4.25);        // no defaults are used
    cout << "Cost is: " << cost << endl;
    
    cost = calc_cost(100.0, 0.08);              // default value of shipping is used
    cout << "Cost is: " << cost << endl;
    
    cost = calc_cost(100.0);                       // all defaults are used
    cout << "Cost is: " << cost << endl;
    
    cost = calc_cost();                               // all defaults are used
    cout << "Cost is: " << cost << endl;
    
    greeting("Ankit");                              // all defaults are used
    greeting("Ankit", "Er.", "Embedded Engineer");            // arguments are given
    greeting("Ankit", "Engineer", "Embedded Firmware Engineer");            // arguments are given
    greeting("Ankit", "Er.");            // arguments are given
    greeting("Ankit", "Embedded Engineer");            // arguments are given
    greeting("Hemangi", "Mrs.", "Madam");            // arguments are given
    
    return 0;
}

// function definitions

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) +shipping;
}

void greeting(string name, string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}