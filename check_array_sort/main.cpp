#include <iostream>

using namespace std;

bool is_array_sorted(int a[], int n)
{
    if((n == 0) || (n == 1)) {
        return true;
    }
    if(a[n - 2] > a[n - 1]) {
        return false;
    }

    return is_array_sorted(a + 1, n - 1);
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

    if(is_array_sorted(a, n)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
