/* Write a function to swap two numbers stored in variables. */

#include <iostream>

using namespace std;

void swap (int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(void) {
    int a {10}, b {20};
    cout << "Given variables are: "<< endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap (a, b);
    cout << "After swapping: "<< endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}