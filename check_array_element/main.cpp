#include <iostream>

using namespace std;

bool is_element_present(int a[], int n, int x)
{
    if(n < 0) {
        return false;
    }

    if(a[n - 1] == x) {
        return true;
    }

    return is_element_present(a, n - 2, x);
}

int main(int argc, char** argv)
{
    int n, x;

    cout << "Enter numbers of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for(int idx = 0; idx < n; idx++) {
        cin >> a[idx];
    }

    cout << "Enter Element to check: ";
    cin >> x;

    if(is_element_present(a, n, x)) {
        cout << "Element is in the array." << endl;
    } else {
        cout << "Element is not in the array." << endl;
    }

    return 0;
}
