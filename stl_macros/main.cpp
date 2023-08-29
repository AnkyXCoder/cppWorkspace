// Macros
#include <iostream>

using namespace std;

//int min(int a, int b) {
//    return (a < b) ? a : b;
//}
//
//char min(char a, char b) {
//    return (a < b) ? a :  b;
//}
//
//double min(double a, double b) {
//    return (a < b) ? a : b;
//}

#define min(a, b)  (((a)<(b)) ? (a) : (b))

#define max(a,b) ((a>b) ? a : b)
int main() {

    cout << min(2,3) << endl;
    cout << min('A', 'B') << endl;
    cout << min(12.5, 9.2) << endl;
    cout << min(5+2*2, 7+40) << endl;

    cout << max(10,20) << endl;
    return 0;
}
