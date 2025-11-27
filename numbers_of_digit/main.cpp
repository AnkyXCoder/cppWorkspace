#include <iostream>

using namespace std;

int get_digits(int n)
{
    if(n == 0) {
        return 0;
    }
    return 1 + get_digits(n / 10);
}

int main(int argc, char** argv)
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Numbers of digits in " << n << " are: " << get_digits(n) << endl;

    return 0;
}
