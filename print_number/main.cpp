#include <iostream>

using namespace std;

void print_asc_numbers(int n)
{
    if(n == 0) {
        return;
    }
    print_asc_numbers(n - 1);
    cout << n << " ";
}

void print_desc_numbers(int n)
{
    if(n == 0) {
        cout << endl;
        return;
    }
    cout << n << " ";
    print_desc_numbers(n - 1);
}

int main(int argc, char** argv)
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Printing " << n << " numbers in ascending order: ";
    print_asc_numbers(n);
    cout << endl;

    cout << "Printing " << n << " numbers in descending order: ";
    print_desc_numbers(n);
    cout << endl;
    return 0;
}
