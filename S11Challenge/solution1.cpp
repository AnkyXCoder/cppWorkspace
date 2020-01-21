/*
    Recall the challenge from Section 9.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/
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

// Pre-processor Directives
#include <iostream>
#include <vector>
using namespace std;


// Function Prototypes
void command_list(void);
char char_conversion(char &input_char);
void display_list(const vector <int> &vec);
void add_number_to_list(vector <int> &vec);
void calculate_mean_value(const vector <int> &vec);
void find_smallest_number(const vector <int> &vec);
void find_largest_number(const vector <int> &vec);
void search_number(const vector <int> &vec);
void clear_list(vector <int> &vec);
void quit_program(void);
void unknown_selection(void);

// Main loop
int main(void) {
    vector <int> list{1, 2, 3};
    char input_selection{};
    command_list();
    do {
        cout << "Enter command: ";
        cin >> input_selection;
        
        // using user defined character conversion method
        //char_conversion(input_selection)
        
        // using standard library function        
        switch(toupper(input_selection)) {
        case 'P': {
            display_list(list);
            break;
        }
        case 'A': {
            add_number_to_list(list);
            break;
        }
        case 'M': {
            calculate_mean_value(list);
            break;
        }
        case 'S': {
            find_smallest_number(list);
            break;
        }
        case 'L': {
            find_largest_number(list);
            break;
        }
        case 'C': {
            clear_list(list);
            break;
        }
        case 'F': {
            search_number(list);
            break;
        }
        case 'Q': {
            quit_program();
            break;
        }
        default: {
            unknown_selection();
            break;
            }
        }
    } while(toupper(input_selection) !='Q');// using standard library function
    
    // using user defined character conversion method
    //char_conversion(input_selection)
    
    return 0;
}


// Function Definitions

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

char char_conversion(char &input_char) {
    if (input_char >= 'A' && input_char <='Z') {
        return input_char;
    } else if (input_char >= 'a' && input_char <='z') {
        return input_char - 32;
    } else {
        cout << "Invalid character inserted. Enter valid input." << endl;
    }
}

void display_list(const vector <int> &vec) {
    if (vec.size() == 0) {
        cout << "[ ] The list is empty." << endl;
    } else {
        cout << "The list of numbers is: [";
        cout << vec.at(0);
        for (int i = 1; i < vec.size()  ; ++i) {
            cout << " " << vec.at(i);
        }
        cout << "]" << endl;
    }
}

void add_number_to_list(vector <int> &vec) {
    int number{0};
    cout << "Enter an integer to add to the list: ";
    cin >> number;
    vec.push_back(number);
    cout << number << " added to the list." << endl;
}

void calculate_mean_value(const vector <int> &vec) {
    if (vec.size() == 0) {
        cout << "Unable to calculate mean value - list is empty." << endl;
    } else {
        cout << "There are total " << vec.size() << " number/s in the list." << endl;
        int sum{};
        double mean_value{};
        for (int i = 0; i < vec.size(); i++) {
            sum = sum + vec.at(i);
        }
        mean_value = static_cast<double> (sum) / vec.size();
        cout << "Mean value of the Number/s of the list is: " << mean_value << endl;
    }
}

void find_smallest_number(const vector <int> &vec) {
    int min_number{};
    if (vec.size() == 0) {
        cout << "Unable to calculate smallest value - list is empty." << endl;
    } else {
        min_number = vec.at(0);
        for (int i = 1; i < vec.size(); i++) {
            if (min_number < vec.at(i)) {
                min_number = min_number;
            }else {
                min_number = vec.at(i);
            }
        }
        cout << "Smallest number from the list is: "<< min_number << endl;
    }
}

void find_largest_number(const vector <int> &vec) {
    int max_number{};
    if (vec.size() == 0) {
        cout << "Unable to calculate smallest value - list is empty." << endl;
    } else {
        max_number = vec.at(0);
        for (int i = 1; i < vec.size(); i++) {
            if (max_number > vec.at(i)) {
                max_number = max_number;
            }else {
                max_number = vec.at(i);
            }
        }
        cout << "Largest number from the list is: "<< max_number << endl;
    }
}

void search_number(const vector <int> &vec) {
    int number{0};
    cout << "Enter the number to find in the list: ";
    cin >> number;
    int count{};
    for (int i = 0; i < vec.size(); i++) {
        if (vec.at(i) != number){
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
}

void clear_list(vector <int> &vec) {
    vec.clear();
    cout << "The list is cleared." << endl;
}

void quit_program(void) {
    cout << "Quitting the program." << endl;
}

void unknown_selection(void) {
    cout << "Unknown selection, please try again." << endl;
    command_list();
}