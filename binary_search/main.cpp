#include <algorithm> // #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int binary_search(int a[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = 0;
    while(start <= end) {
        mid = (start + end) / 2;
        if(a[mid] == key) {
            return mid;
        } else if(a[mid] < key) {
            start = mid;
        } else {
            end = mid;
        }
    }

    return -1;
}

int main(int argc, char** argv)
{
    int n;

    cout << "Enter numbers of elements: ";
    cin >> n;

    int a[n], key;

    cout << "Enter elements: ";
    for(int idx = 0; idx < n; idx++) {
        cin >> a[idx];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int key_idx = binary_search(a, n, key);

    if(key_idx == -1) {
        cout << "Key not found." << endl;
    } else {
        cout << "Binary Search: key: " << key << " at index: " << key_idx << endl;
    }

    return 0;
}
