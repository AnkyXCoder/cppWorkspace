#include <iostream>
using namespace std;
int main(){
    const double cost_per_program {32.75};
    int numbers_of_programs {0};
    const double sale_tax {0.06};
    const int estimate_expiry {30};
    cout << "Welcome to AnkyX's Program Making Service." << endl;
    
    cout << "\nHow many programs do you want to create? ";
    
    cin >> numbers_of_programs;
       
    cout << "\nEstimated cost for programs:" << endl;
    cout << "\nNumbers of Programs: " << numbers_of_programs << endl;
    cout << "Cost per Program: " << cost_per_program << " $" << endl;
    double cost = numbers_of_programs * cost_per_program;
    double tax_cost = sale_tax * cost;
    cout << "Cost: $ " << cost << endl;
    cout << "Tax: $ " << tax_cost << endl;
    cout << "============================" << endl;
    cout << "Total Estimate: $ " << cost+tax_cost << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
    cout << endl;
    
    return 0;
}