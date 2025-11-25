#include <iostream>
#include <stdio.h>

using namespace std;

void selection_sort(int a[], int n)
{
    for(int idx = 0; idx <= n - 2; idx++) {
        int smallest_num_idx = idx;
        for(int jdx = idx + 1; jdx <= n - 1; jdx++) {
            if(a[jdx] < a[smallest_num_idx]) {
                smallest_num_idx = jdx;
            }
        }
        swap(a[idx], a[smallest_num_idx]);
    }
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

    selection_sort(a, n);

    cout << "Sorted array: ";
    for(int idx = 0; idx < n; idx++) {
        cout << a[idx] << " ";
    }
    cout << endl;

    return 0;
}
