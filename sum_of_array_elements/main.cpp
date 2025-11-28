#include <iostream>

using namespace std;

int sum_array_elements(int a[], int n, int i)
{
    if(n == i) {
        return 0;
    }
    return a[i] + sum_array_elements(a, n, i + 1);
}

int main(int argc, char** argv)
{
    int n;

    cout << "Enter numbers of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for(int idx = 0; idx < n; idx++) {
        cin >> a[idx];
    }
    cout << endl;

    cout << "Sum of Array elements: " << sum_array_elements(a, n, 0) << endl;

    return 0;
}
