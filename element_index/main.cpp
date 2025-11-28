#include <iostream>
#include <vector>

using namespace std;

int get_first_index(int a[], int n, int x, int i)
{
    if(i == n) {
        return -1;
    }

    if(a[i] == x) {
        return i;
    }

    return get_first_index(a, n, x, i + 1);
}

int get_last_index(int a[], int n, int x, int i)
{
    if(i < 0) {
        return -1;
    }

    if(a[n - i - 1] == x) {
        return n - 1 - i;
    }

    return get_last_index(a, n, x, i + 1);
}

void print_element_index(int a[], int n, int x, int i)
{
    if(n == i) {
        return;
    }

    if(a[i] == x) {
        cout << i << " ";
    }

    print_element_index(a, n, x, i + 1);
}

void count1(int a[], int n, int x, int i, int& answer)
{
    if(n == i) {
        return;
    }

    if(a[i] == x) {
        answer++;
    }

    count1(a, n, x, i + 1, answer);
}

int count2(int a[], int n, int x)
{
    if(n == 0) {
        return 0;
    }

    if(a[n - 1] == x) {
        return 1 + count2(a, n - 1, x);
    }

    return count2(a, n - 1, x);
}

void save_element_index(int a[], int n, int x, vector<int>& answer)
{
    if(n == 0) {
        return;
    }

    if(a[n - 1] == x) {
        answer.push_back(n - 1);
    }

    save_element_index(a, n - 1, x, answer);
}

void save_element_index2(int a[], int n, int x, int i, vector<int>& answer)
{
    if(n == i) {
        return;
    }

    if(a[i] == x) {
        answer.push_back(i);
    }

    save_element_index2(a, n, x, i + 1, answer);
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

    cout << "Enter element to find: ";
    cin >> x;

    int idx = get_first_index(a, n, x, 0);
    if(idx < 0) {
        cout << "Element not found in array." << endl;
        return 0;
    } else {
        cout << "First index of element: " << idx << endl;
    }

    idx = get_last_index(a, n, x, 0);
    cout << "Last index of element: " << idx << endl;

    cout << "Number " << x << " is found in the given array at: ";
    print_element_index(a, n, x, 0);
    cout << endl;

    int count = 0;
    count1(a, n, x, 0, count);
    cout << "Method 1 :Count of Number " << x << " in the given array is: " << count << endl;
    cout << "Method 2 :Count of Number " << x << " in the given array is: " << count2(a, n, x) << endl;

    vector<int> result;

    cout << "Saving index of Number found in the given array: " << endl;
    cout << "Method 1 :";
    save_element_index(a, n, x, result);
    for(size_t idx = 0; idx < result.size(); idx++) {
        cout << result[idx] << " ";
    }
    cout << endl;

    result.clear();
    cout << "Method 2 :";
    save_element_index2(a, n, x, 0, result);
    for(size_t idx = 0; idx < result.size(); idx++) {
        cout << result[idx] << " ";
    }
    cout << endl;

    return 0;
}
