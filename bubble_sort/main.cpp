#include <algorithm> // #include <bits/stdc++.h>
#include <iostream>

using namespace std;

void bubble_sort(int a[], int n)
{
    for(int count = 0; count <= n - 1; count++) {
        for(int jdx = 0; jdx <= n - 2; jdx++) {
            if(a[jdx] > a[jdx + 1]) {
                swap(a[jdx], a[jdx + 1]);
            }
        }
    }
}

void optimized_bubble_sort(int a[], int n)
{
    for(int count = 0; count < n - 1; count++) {
        bool flag = false;
        for(int jdx = 0; jdx < n - count - 1; jdx++) {
            if(a[jdx] > a[jdx + 1]) {
                swap(a[jdx], a[jdx + 1]);
                flag = true;
            }
        }
        if(!flag)
            break;
    }
}

int main(int argc, char** argv)
{
    int n;

    cout << "Enter numbers of elements: ";
    cin >> n;

    int a[n], a1[n], a2[n];

    cout << "Enter elements: ";
    for(int idx = 0; idx < n; idx++) {
        cin >> a[idx];
        a1[idx] = a2[idx] = a[idx];
    }
    cout << endl;

    bubble_sort(a, n);

    cout << "Sorted array: " << endl;
    cout << "Bubble Sort: ";
    for(int idx = 0; idx < n; idx++) {
        cout << a[idx] << " ";
    }
    cout << endl;

    optimized_bubble_sort(a1, n);

    cout << "Optimized Bubble Sort: ";
    for(int idx = 0; idx < n; idx++) {
        cout << a1[idx] << " ";
    }
    cout << endl;

    sort(a2, a2 + n);

    cout << "STL Sort: ";
    for(int idx = 0; idx < n; idx++) {
        cout << a2[idx] << " ";
    }
    cout << endl;
    return 0;
}
