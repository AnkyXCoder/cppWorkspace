#include <iostream>
#include <vector>

using namespace std;

void merge_array(vector<int>& arr, int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    // Create temporary vectors
    vector<int> Left(n1), Right(n2);

    // copy data to temporary vectors
    for (int i = 0; i < n1; i++) {
        Left[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++) {
        Right[i] = arr[mid + 1 + i];
    }
    
    // merge temporary vectors back into main vector
    int i = 0, j = 0;
    int k = start;

    while((i < n1) && (j < n2)) {
        if (Left[i] <= Right[j]) {
            arr[k] = Left[i];
            i++;
        } else {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of Left[], 
    // if there are any
    while (i < n1) {
        arr[k] = Left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of Right[], 
    // if there are any
    while (j < n2) {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int>& arr, int start, int end)
{
    if(start >= end) {
        return;
    }

    cout << "Sorting array elements:";
    for(int idx = 0; idx < end; idx++) {
        cout << arr[start + idx] << " ";
    }
    cout << endl;

    int mid = start + ((end - start) / 2);
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    merge_array(arr, start, mid, end);
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

    merge_sort(a, 0, n - 1);
    
    cout << "Sorted array elements:";
    for(int idx = 0; idx < n; idx++) {
        cout << a[idx] << " ";
    }
    cout << endl;
    

	return 0;
}
