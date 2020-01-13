#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count {0};
    for (auto number:vec)
    {
        if ( (number % 3 == 0) || (number % 5 == 0)){
            count++;
            cout << number << " is divisible by 3 or 5." << endl;
        } else {
            cout << number << " is not divisible by 3 or 5." << endl;
        }
    }
    cout << "Total " << count << " numbers from given vector are divisible by 3 or 5." << endl;
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT CHANGE THE CODE BELOW THIS LINE----
    return 0;
}