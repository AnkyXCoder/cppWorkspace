/* Overloading Functions 
 * 
 * It means -> using the same function name with different input arguments and output types
 * 
 * */


#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function Prototypes
// note that all the function names and output types are same, while input arguments are different

void print(int);
void print(double);
// when using default values for the input arguments for more than one functions, like below, it will create compiler error
// comment the above two functions and uncomment following two functions to check for compiler error
//void print(int = 100);
//void print(double = 123.5);

void print(string);
void print(string, string);
void print(vector <string>);


int main(){
    
    print (100);        // int 100
    print ('A');          // char A
    print (123.45);   // double 123.45
    print (123.45F); // float 123.45 is promoted to double
    print("Hello");   // C style string
    
    string s {"Good Person"};   // C++ style string
    print (s);
    
    print("Hello" , s);                 // C style string is converted to C++ style string
    
    vector <string> vec {"Hello", "Sun", "Shine"};
    print(vec);
    
    return 0;
}


void print(int n) {
    cout << "Printing int: " << n << endl;
}

void print(double m) {
    cout << "Printing double: " << m << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s1, string s2) {
    cout << "Printing string1: " << s1 << endl;
    cout << "Printing string2: " << s2 << endl;
}

void print(vector <string> v) {
    cout << "Printing vector of strings: " ;
    for (auto s: v) {
        cout << s + " ";
    }
    cout << endl;
}