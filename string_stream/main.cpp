// stringstreams
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

int main() {
    int num{};
    double total{};
    string name{};
    
    string info {"Anky 100 1234.5"};
    istringstream iss {info};
    
    iss >> name  >> num >>  total;
    cout << setw(10) << left << name  
                   << setw(5) << num
                   << setw(10) << total << endl;
    
    cout << "\n---------------------------------------" << endl;
    
    ostringstream oss {};
    oss << setw(10) << left << name
          << setw(5) << num
          << setw(10) << total << endl;
    cout << oss.str() << endl;
    
    
    cout << "\n--- Data validation ------------------------------------" << endl;
    
    int value{};
    string entry {};
    bool done = false;
    do {
        cout << "Please enter an integer: ";
        cin >> entry;
        istringstream validator {entry};
        if (validator >> value) 
            done = true;
        else 
            cout << "Sorry, that's not an integer" << endl;
            
         // discards the input buffer
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    } while (!done);
    
    cout << "You entered the integer: " << value << endl;
    
    cout << endl;
    return 0;
}
