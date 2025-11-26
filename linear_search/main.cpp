#include <algorithm> // #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int linear_search(int a[], int n, int key)
{
    for(int idx = 0; idx < n; idx++) {
        if(a[idx] == key) {
            return idx;
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

    int key_idx = linear_search(a, n, key);

    if(key_idx == -1) {
        cout << "Key not found." << endl;
    } else {
        cout << "Linear Search: key: " << key << " at index: " << key_idx << endl;
    }

    return 0;
}
