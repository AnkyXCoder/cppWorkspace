#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int start, int end)
{
    // choose the pivot element
    int pivot = arr[end];

    // index of smaller element and indicates 
    // the right position of pivot found so far
    int i = start - 1;

    // Traverse arr[start..end] and move all smaller
    // elements on left side. Elements from start to 
    // i are smaller after every iteration
    for (int j = start; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    // move pivot after smaller elements and
    // return its position
    swap(arr[i + 1], arr[end]);  
    return i + 1;
}

void quick_sort(vector<int>& arr, int start, int end)
{
    if(start >= end) {
        return;
    }

    cout << "Sorting array elements:";
    for(int idx = 0; idx < end; idx++) {
        cout << arr[start + idx] << " ";
    }
    cout << endl;

    int pi = partition(arr, start, end);
    quick_sort(arr, start, pi - 1);
    quick_sort(arr, pi + 1, end);
}

int main(int argc, char** argv)
{
    int n, x;

    cout << "Enter numbers of elements: ";
    cin >> n;

    vector<int> a;

    cout << "Enter elements: ";
    for(int idx = 0; idx < n; idx++) {
        cin >> x;
        a.push_back(x);
    }

    n = a.size();
    cout << "Given array elements:";
    for(int idx = 0; idx < n; idx++) {
        cout << a[idx] << " ";
    }
    cout << endl;

    quick_sort(a, 0, n - 1);
    
    cout << "Sorted array elements:";
    for(int idx = 0; idx < n; idx++) {
        cout << a[idx] << " ";
    }
    cout << endl;
    

	return 0;
}
