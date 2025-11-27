#include <iostream>
#include <math.h>

using namespace std;

double geometric_sum(int x, int n)
{
    if(n == 0) {
        return 1;
    }

    return (1.0 / pow(x, n)) + geometric_sum(x, n - 1);
}

int main(int argc, char** argv)
{
    int x, n;

    cout << "Enter the number: ";
    cin >> x;

    cout << "Enter the limit: ";
    cin >> n;

    cout << "Geometric sum: " << geometric_sum(x, n) << endl;

    return 0;
}
