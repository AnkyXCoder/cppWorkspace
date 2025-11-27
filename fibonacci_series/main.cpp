#include <iostream>

using namespace std;

int get_fibonacci(int n)
{
    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    return get_fibonacci(n - 1) + get_fibonacci(n - 2);
}

int main(int argc, char** argv)
{
    int val;

    cout << "Enter the number: ";
    cin >> val;

    cout << "Fibonacci of " << val << " = " << get_fibonacci(val) << endl;
    return 0;
}
