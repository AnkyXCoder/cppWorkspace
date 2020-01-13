/* This program demonstartes various functions of <string> library. 
 * For all the functions of string library,
 * refer to link: https://en.cppreference.com/w/cpp/string
 * */


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};              // s5 = "Apple"
    string s6 {s1, 0, 3};      // s6 = "App"
    string s7 (5, 'X');         // s7 = "XXXXX"
    
    cout << s0 << endl;     // no garbage value is generated.
    cout << s0.length() << endl;    // string is empty.
    
    cout << "/nString Initialization:" << endl;
    cout << "s0 is initialized to " << s0 << endl;
    cout << "s1 is initialized to " << s1 << endl;
    cout << "s2 is initialized to " << s2 << endl;
    cout << "s3 is initialized to " << s3 << endl;
    cout << "s4 is initialized to " << s4 << endl;
    cout << "s5 is initialized to " << s5 << endl;
    cout << "s6 is initialized to " << s6 << endl;
    cout << "s7 is initialized to " << s7 << endl;
    
/************* Comparison operators ****************/
    cout << "/nString Comparison:" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ";"<< (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ";"<< (s1 == s2) << endl;
    cout << s1 << " != " << s3 << ";"<< (s1 != s3) << endl;
    cout << s1 << " < " << s2 << ";"<< (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ";"<< (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ";"<< (s4 > s5) << endl;
    cout << s1 << " == " << "Apple" << ";"<< (s1 == "Apple") << endl;
    
/************* Assignment operators ****************/    
    cout << "/nAssignment Operation:" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;
    
    s3 = "AnkyX";
    cout << "s3 is now: " << s3 << endl;
    
    s3[0] = 'E';
    cout << "s3 first letter is changed to E:" << s3 << endl;
    
    s3.at(4) = 'V';
    cout << "s3 last letter is changed to V:" << s3 << endl;
    
/************* Concatenate ****************/        
    cout << "/nConcatenation: "<< endl;
    
    s3 = "Watermelon";
    
    s3 = s5+ " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;
    
//    s3 = "nice" + " cold " + s3 + "juice";  // Error statement; Generates Compiler Error
    s3 = "nice and cold " + s3 + " juice";  // Correct statement
    cout << "s3 is now: " << s3 << endl;
    
// for loop
    s1 = "Apple";
    for (size_t i {0}; i < s1.length(); i ++) {
//        cout << s1 [i] ;
        cout << s1.at(i);
    }
    cout << endl;
    
// Range-based for loop
    for (char c: s1) {
        cout << c;
    }
    cout << endl;
    
// substring
    cout << "\nSubstring:" << endl;
    s1 = "This is a Test.";
    cout << s1.substr(0,4) << endl;
    cout << s1.substr(5,2) << endl;
    cout << s1.substr(10,4) << endl;

// Erase 
    s1.erase(0,5);
    cout << "s1 is now: " << s1 << endl;
    
// Getline
    cout << "\nGetline:" << endl;
    
    string full_name;
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Your full name is: " << full_name << endl;
    
// Find
    cout << "\nFind:" << endl;
    
    string s9 = "The secret password is Boo.";
    string word{};
    cout << "enter the word to find in the string:";
    cin >> word;
    
    cout << "The string is: " << s9 << endl;
    
    
    size_t position = s9.find(word);
    if (position != string::npos) {
        cout << "Found " << word << " at position: " << position << endl;
    } else {
        cout << "Sorry, " << word << " not found in the string." << endl;
    }
    cout << endl;


    return 0;
}