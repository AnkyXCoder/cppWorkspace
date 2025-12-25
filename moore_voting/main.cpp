#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& arr)
{
    int candidate = arr[0];
    int count = 1;

    int n = arr.size();
    for (int idx = 1; idx < n; idx++) {
        if(arr[idx] == candidate) {
            count++;
        } else {
            count--;
            if(0 == count) {
                candidate = arr[idx];
                count = 1;
            }
        }
    }

    int count2 = 0;
    for(int idx = 0; idx < n; idx++) {
        if(candidate == arr[idx]) {
            count2++;
        }
    }
    if (count2 > ((n - 1)/2)) {
        return candidate;
    }

    return -1;
}

int main(int argc, char** argv)
{
    int n;

    cout << "Enter numbers of elements: ";
    cin >> n;

    vector<int> a;
    int x;

    cout << "Enter elements: ";
    for(int idx = 0; idx < n; idx++) {
        cin >> x;
        a.push_back(x);
    }

    x = majorityElement(a);
    if(-1 == x) {
        cout << "There are no majority Elements." << endl;
        return 0;
    }
    cout << "Majority Element is: " << x << endl;
    return 0;
}
