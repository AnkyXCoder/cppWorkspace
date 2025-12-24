#include <algorithm> // #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int advanced_binary_search(vector<int>& arr, int target, bool getFirst)
{
    int start = 0, end = arr.size() - 1;
    int answer = -1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == target) {
            answer = mid;
            if(getFirst) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else if(arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return answer;
}

int main(int argc, char** argv)
{
    int n;

    cout << "Enter numbers of elements: ";
    cin >> n;

    vector<int> a;
    int x, key;

    cout << "Enter elements: ";
    for(int idx = 0; idx < n; idx++) {
        cin >> x;
        a.push_back(x);
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int key_idx = advanced_binary_search(a, key, true);

    if(key_idx == -1) {
        cout << "Key not found." << endl;
        return -1;
    } else {
        cout << "Binary Search: first key: " << key << " found at index: " << key_idx << endl;
    }

    key_idx = advanced_binary_search(a, key, false);

    if(key_idx == -1) {
        cout << "Key not found." << endl;
    } else {
        cout << "Binary Search: last key: " << key << " found at index: " << key_idx << endl;
    }

    return 0;
}
