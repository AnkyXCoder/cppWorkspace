#include <iostream>
using namespace std;
int main(){
    cout << "Sum of odd numbers between 1 and 15, including." << endl;
    int sum {0};
   
   for (int i = 1; i <= 15; i++){
       if ( i % 2 != 0)
           {
           sum = sum + i;
            }
   }
   cout << sum << endl;
    return 0;
}