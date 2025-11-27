#include <iostream>

using namespace std;

int count_digits(int x, int n)
{
    if(x == 0) {
        return 0;
    }

    if((x % 10) == n) {
        return 1 + count_digits(x / 10, n);
    }

    return count_digits(x / 10, n);
}

int main(int argc, char** argv)
{
    int x, n;

    cout << "Enter the number: ";
    cin >> x;

    cout << "Enter the digit to find in the given number: ";
    cin >> n;

    cout << "Numbers of " << n << "digits in " << x << " are: " << count_digits(x, n) << endl;

    return 0;
}
