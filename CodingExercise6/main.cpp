#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec {10, 20, 30, 40, 50};
    cout << "First element of vector is: " << vec.at(0) << endl;
    cout << "Last element of vector is: " << vec.at(4) << endl;
    cout << "====================" << endl;
    cout << "Enter the updated values of vector elements:" << endl;
    cout << "Enter the updated value of first element:" << endl;
    cin >> vec[0];
    cout << "Enter the updated value of last element:" << endl;
    cin >> vec[4];
    cout << "====================" << endl;
    cout << "Updated values of vector elements:" << endl;
    cout << "First element of vector is: " << vec.at(0) << endl;
    cout << "Last element of vector is: " << vec.at(4) << endl;
    return 0;
}