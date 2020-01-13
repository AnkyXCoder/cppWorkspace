#include <iostream>

using namespace std;

int main(){
    
    const int driving_age {16};
    
    int age{};
    bool has_car {false};
    
    cout << "Enter your age:" ;
    cin >> age;
    
    cout << "Do you own a car? ";
    cin >> boolalpha;
    cin >> has_car;
    
    cout << "**************************** Solution 1**************************" << endl;
    if (age < driving_age){
        cout << "Sorry, come back in " << (driving_age - age) << " years and be sure you own a car when you come back." << endl;
    }
    else {
        if (has_car){
            cout << "Yes - you can drive." << endl;
        }else{
            cout << "Sorry, you need to buy a car before you can drive!" << endl;
        }
    }
    cout << "**************************** Solution 2**************************" << endl; 
    if (age >= driving_age) {
        if (has_car) {
            cout << "Yes - you can drive!" << endl;
        } else {
            cout << "Sorry, you need to buy a car before you can drive!" << endl;
        }
        
    } else {
        cout << "Sorry, come back in " << driving_age - age << " years and be sure you own a car when you come back." << endl;
    }
    return 0;
}