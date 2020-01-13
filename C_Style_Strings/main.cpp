#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {    
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
    cout << "Please enter your first name: ";
    cin >> first_name ;
    cout << "Please enter your last name: ";
    cin >> last_name ;
    
    cout << first_name << " " << last_name << endl;
    cout << "---------------------------------------" << endl;
    
    cout << "Hello, " << first_name << ". Your first name has " << strlen(first_name) << " characters." << endl;
    cout << "and Your last name " << last_name << " has " << strlen(last_name) << " characters." << endl;
    
    strcpy(full_name, first_name);  // Copy fisrt_name to full_name => full_name {first_name}
    strcat(full_name, " ");               // Concatenate full_name and a space => full_name {first_name }
    strcat(full_name, last_name);   // Concatenate last_name to full_name => full_name {first_name last_name}
    
    cout << "Your full name is " << full_name << "." << endl;
    
    cout << "------------------------------------------------" << endl;
    
    cout << "Please enter your full name:";
    cin >> full_name;     // This will only get first name that user entered.
    cout << "Your full name is: " << full_name << endl;
    
    cout << "------------------------------------------------" << endl;

/************* Comment above section *****************/
/********************* New Section *********************/
//    cout << "Please enter your full name: ";
//    cin.getline(full_name, 50);     // This will only get full name that user entered.
//    cout << "Your full name is: " << full_name << endl;
//    
//    cout << "----------------------------------------------" << endl;
//    
//    strcpy(temp, full_name);
//    if (strcmp(temp,full_name) == 0) {
//        cout << temp << " and " << full_name << " are same." << endl;
//    } else {
//        cout << temp << " and " << full_name << " are different." << endl;
//    }
//    
//    cout << "----------------------------------------------" << endl;
//    
//    for(size_t i {0}; i < strlen(full_name); i++) {
//        if (isalpha(full_name[i] ))
//            full_name[i] = toupper(full_name[i]);
//    }
//    
//    cout << "Your full name is " << full_name << endl;
//    
//    cout << "----------------------------------------------" << endl;
//    
//    if (strcmp(temp,full_name) == 0) {
//        cout << temp << " and " << full_name << " are same." << endl;
//    } else {
//        cout << temp << " and " << full_name << " are different." << endl;
//    }
//    
//    cout << "----------------------------------------------" << endl;
//    
//    cout << "Result of comparing " << temp << " and " << full_name << ";" << strcmp(temp, full_name) << endl;
//    cout << "Result of comparing " << full_name << " and " << temp << ";" << strcmp(full_name, temp) << endl;
    
    return 0;
}