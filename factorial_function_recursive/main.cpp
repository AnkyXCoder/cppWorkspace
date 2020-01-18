/* Recursion Function
    A function which calls itself directly or indirectly is called a recursive function.

    Recursive Problem Solving
    Base Case
    Divide the rest of the problem into sub problem and do recursive call

    Factorial Function is a recursive function
    Definition:
        0! = 1
        n! = n x (n - 1)!
*/
#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;	             // base case
    return n * factorial(n-1); // recursive case
}

int main() {
    cout << factorial(3) << endl;
    cout << factorial(4) << endl;
    cout << factorial(12) << endl;
    cout << factorial(20) << endl;
    int num {};
    cout << "Enter a number to find its Factorial:";
    cin >> num;
    cout << "\nFactorial of a given number is: " << factorial(num) << endl;
    return 0;
}
