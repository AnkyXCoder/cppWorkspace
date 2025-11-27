#include <iostream>

using namespace std;

int get_power(int x, int n)
{
    if(n == 0) {
        return 1;
    }

    return x * get_power(x, n - 1);
}

int main(int argc, char** argv)
{
    int x, n;

    cout << "Enter the number x: ";
    cin >> x;

    cout << "Enter the power number n: ";
    cin >> n;

    cout << x << "^" << n << " = " << get_power(x, n) << endl;
    return 0;
}
