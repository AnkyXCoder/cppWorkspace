#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[10] {0};
    arr[0] = 100;
    cout << "First element of array is:" << arr[0] << endl;
    arr[9] = 1000;
    cout << "Last element of array is:" << arr[9] << endl;
    return 0;
}