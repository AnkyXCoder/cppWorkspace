#include <iostream>

using namespace std;

int get_factorial(int n)
{
    if(n < 0) {
        return -1;
    }
    if(n == 0) {
        return 1;
    }

    return n * get_factorial(n - 1);
}

int main(int argc, char** argv)
{
    int val;

    cout << "Enter the number: ";
    cin >> val;

    cout << val << "! = " << get_factorial(val) << endl;
    return 0;
}
