#include <iostream>
#include <string>
using namespace std;
void employee_profile();
int main(){
    employee_profile();
}
void employee_profile(){
    double hourly_wage {23.50};
    int age {0};
    string name;
    
	cout << "Enter emplyee's name: ";
    cin >> name;
	cout << "Enter emplyee's age: ";
    cin >> age;
    cout << name << ", " << age << endl;
}