/*
 * This challenge is about using a collection or list of integers and allowing the user to select options froma menu to perform operations on the list.
 * 
 * The program will display a menu options to the users as follows:
 * P - Print Numbers
 * A - Add a Number
 * M - Display Mean Value of the Numbers
 * S - Display Smallest Number from the list
 * L - Display Largest Number from the list
 * F - Find for a number in the list.
 * C - Clear the list
 * Q - Quit
 * 
 * The program should only accept valid choices from the user, both upper case and lower case selections should be allowed.
 * If an invalid choice is made, the program will display, "Unknown selection, please try again." and the menu options will be displayed again.
 * 
 * If the list is empty, the program will display "[] the list is empty.".
 * If the user adds a number to the list, the program will display "{number} added to the list.".
 * If the list is empty, the program will display "Unable to calculate the mean value - no data."
 * If the list is empty, the program will display "Unable to calculate the smallest value - list is empty."
 * If the list is empty, the program will display "Unable to calculate the largest value - list is empty."
 */ 

#include <iostream>
#include <vector>
using namespace std;

void command_list(void) {
    cout << "\nThis program will respond to below given commands:" << endl;
    cout << "P - Print Numbers of the list." << endl;
    cout << "A - Add a Number to the list." << endl;
    cout << "M - Display Mean Value of the Numbers of the list." << endl;
    cout << "S - Display Smallest Number from the list." << endl;
    cout << "L - Display Largest Number from the list." << endl;
    cout << "C - Clear the list." << endl;
    cout << "F - Find for a number in the list." << endl;
    cout << "Q - Quit." << endl;
}

int main() {
    size_t index{0};
    int number{};
    vector <int> list{1, 2, 3};
    char input_selection{};
    command_list();
    do {
        cout << "Enter command: ";
        cin >> input_selection;

        switch(input_selection) {
        case 'p':
        case 'P': {
            index = list.size();
            if (index == 0) {
                cout << "[ ] The list is empty." << endl;
            } else {
                cout << "The list of numbers is: [";
                cout << list.at(0);
                for (int i = 1; i < index  ; ++i) {
                    cout << " " << list.at(i);
                }
                cout << "]" << endl;
            }
            break;
        }
        case 'a':
        case 'A': {
            cout << "Enter an integer to add to the list: ";
            cin >> number;
            list.push_back(number);
            cout << number << " added to the list." << endl;
            break;
        }
        case 'm':
        case 'M': {
            index = list.size();
            if (index == 0) {
                cout << "Unable to calculate mean value - list is empty." << endl;
            } else {
                cout << "There are total " << index<< " number/s in the list." << endl;
                int sum{};
                double mean_value{};
                for (int i = 0; i < index; i++) {
                    sum = sum + list.at(i);
                }
                mean_value = static_cast<double> (sum) / list.size();
                cout << "Mean value of the Number/s of the list is: " << mean_value << endl;
            }
            break;
        }
        case 's':
        case 'S': {
            int min_number{};
            index = list.size();
            if (index == 0) {
                cout << "Unable to calculate smallest value - list is empty." << endl;
            } else {
                min_number = list.at(0);
                for (int i = 1; i < index; i++) {
                    if (min_number < list.at(i)) {
                        min_number = min_number;
                    }else {
                        min_number = list.at(i);
                    }
                }
                cout << "Smallest number from the list is: "<< min_number << endl;
            }
            break;
        }
        case 'l':
        case 'L': {
            int max_number{};
            index = list.size();
            if (index == 0) {
                cout << "Unable to calculate smallest value - list is empty." << endl;
            } else {
                max_number = list.at(0);
                for (int i = 1; i < index; i++) {
                    if (max_number > list.at(i)) {
                        max_number = max_number;
                    }else {
                        max_number = list.at(i);
                    }
                }
                cout << "Largest number from the list is: "<< max_number << endl;
            }
            break;
        }
        case 'c':
        case 'C': {
            list.clear();
            cout << "The list is cleared." << endl;
            break;
        }
        case 'f':
        case 'F': {
            cout << "Enter the number to find in the list: ";
            cin >> number;
            index = list.size();
            int count{};
            for (int i = 0; i < index; i++) {
                if (list.at(i) != number){
                    continue;
                } else {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                cout << "Number is not present in the list." << endl;
            } else {
                cout << "Number is present in the list." << endl;
            }
            break;
        }
        case 'q':
        case 'Q': {
            cout << "Quitting the program." << endl;
            break;
        }
        default: {
            cout << "Unknown selection, please try again." << endl;
            command_list();
            break;
            }
        }
    } while(input_selection != 'q' && input_selection !='Q');
    return 0;
}