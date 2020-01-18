/* Fibonacci Series Recursive series
    Definition:
        Base Case:
            Fib(0) = 0
            Fib(1) = 1
        Recursive Case:
            Fib(n) = Fib(n-1) + Fib(n-2)
*/

#include <iostream>

using namespace std;
unsigned long long fibonacci(unsigned long long n);

int main() {
    cout << fibonacci(5) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;
    int num{};
    cout << "Enter a number to find its Fibonacci Series:";
    cin >> num;
    cout << "\nFibonacci of a given number is: " << fibonacci(num) << endl;
    return 0;
}

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;	                            // base cases
    return fibonacci(n-1) + fibonacci(n-2);     // recursion
}
