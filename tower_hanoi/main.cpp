#include <iostream>
#include <stdio.h>

using namespace std;

int tower_of_hanoi(int n)
{
    if(n == 0) {
        return 0;
    }

    return tower_of_hanoi(n - 1) + 1 + tower_of_hanoi(n - 1);
}

void printSteps(int n, char s, char d, char h)
{
    if(n == 0) {
        return;
    }
    printSteps(n - 1, s, h, d);
    cout << "Moving Disk " << n << " from " << s << " to " << d << endl;
}

int main(int argc, char** argv)
{
    int n;
    cin >> n;

    cout << tower_of_hanoi(n) << endl;

    printSteps(n, 'A', 'C', 'B');

    return 0;
}
