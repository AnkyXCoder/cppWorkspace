#include <iostream>

using namespace std;

int multiplication(int m, int n)
{
    if(n == 0) {
        return 0;
    }
    return m + multiplication(m, n - 1);
}

int main(int argc, char** argv)
{
    int x, y;

    cout << "Enter the number x: ";
    cin >> x;

    cout << "Enter the number y: ";
    cin >> y;

    cout << x << "x" << y << " = " << multiplication(x, y) << endl;

    return 0;
}
