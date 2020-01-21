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


#include <iostream>
#include <vector>
#include <cctype>   // for toupper

using namespace std;

// Prototypes for displaying the menu and getting user selection
void display_menu();
char get_selection();

// Menu handling function prototypes
void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_find(const vector<int> &v);
void handle_quit();
void handle_unknown();

// Prototypes for functions that work with the list
// to display it, calculate mean, etc.
void display_list(const vector<int> &v);
double calculate_mean(const vector<int> &v);
int get_smallest(const vector<int> &v);
int get_largest(const vector<int> &v);
bool find(const vector<int> &v, int target);

int main() {
    
    vector<int> numbers;        // our list of numbers
    char selection {};
    
    do {
        display_menu();
        selection = get_selection();
        switch (selection) {
            case 'P': 
                handle_display(numbers); 
                break;
            case 'A': 
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
        }
    } while (selection != 'Q');
    cout << endl;
    return 0;
}

/***************************************************************
This function displays the menu to the console.
***************************************************************/
void display_menu() {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number"<< endl;
        cout << "F - Find a number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
}

/***************************************************************
This function simply reads a character selection from
stdin and returns it as upper case.
***************************************************************/
char get_selection() {
    char selection {};
    cin >> selection;
    return toupper(selection);
}

/***************************************************************
This function is called when the user selects the display list
option from the main menu.
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_display(const vector<int> &v) {
    if (v.size() == 0)
        cout << "[] - the list is empty" << endl;
    else    
        display_list(v);
}

/***************************************************************
This function is called when the user selects add a number
to the list from the main menu

Note that the vector parameter must NOT be const since
it will be changing the list of numbers
***************************************************************/
void handle_add(vector<int> &v) {
    int num_to_add {};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}

/***************************************************************
This function is called when the user selects calculate the mean
from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_mean(const vector<int> &v) {
    if (v.size() == 0)
        cout << "Unable to calculate mean - list is empty" << endl;
    else    
        cout << "The mean is " << calculate_mean(v) << endl;
}

/***************************************************************
This function is called when the user selects the smallest 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_smallest(const vector<int> &v) {
     if (v.size() == 0)
        cout << "Unable to determine the smallest - list is empty" << endl;
    else    
        cout << "The smallest element in the list is " << get_smallest(v) << endl;
}

/***************************************************************
This function is called when the user selects the largest 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_largest(const vector<int> &v) {
     if (v.size() == 0)
        cout << "Unable to determine the largest - list is empty" << endl;
    else    
        cout << "The largest element in the list is " << get_largest(v) << endl;
}

/***************************************************************
This function is called when the user selects the find 
option from the main menu
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void handle_find(const vector<int> &v) {
    int target{};
    cout << "Enter the number to find: ";
    cin >> target;
    if ( find(v, target)) 
        cout << target << " was found" << endl;
    else
        cout << target << " was not found" << endl;
}


/***************************************************************
This function is called when the user selects the quit 
option from the main menu
***************************************************************/
void handle_quit() {
    cout << "Goodbye" << endl;
}

/***************************************************************
This function is called whenever the user enters a selection
and we don't know how to handle it.
It is not one of the valid options in the main menu
***************************************************************/
void handle_unknown() {
    cout << "Unknown selection - try again" << endl;
}

/***************************************************************
This function expects a list of integers as a vector
and displays all the integers in the list in square brackets
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
void display_list(const vector<int> &v) {
    cout << "[ ";
    for (auto num: v)
        cout << num << " ";
    cout << "]" << endl;
}

/***************************************************************
This function expects a list of integers as a vector
and returns the calculated mean
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************/
double calculate_mean(const vector<int> &v) {
    int total {};
    for (auto num: v)
        total += num;
    return static_cast<double>(total)/v.size();
}

/***************************************************************
This function expects a list of integers as a vector
and returns the largest integer in the list
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************/
int get_largest(const vector<int> &v) {
    int largest = v.at(0);
    for (auto num: v) 
        if (num > largest)
            largest = num;
    return largest;
}

/***************************************************************
This function expects a list of integers as a vector
and returns the smallest integer in the list
Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
Note: the list must not be empty
***************************************************************/
int get_smallest(const vector<int> &v) {
    int smallest = v.at(0);
    for (auto num: v) 
        if (num < smallest)
            smallest = num;
    return smallest;
}

/***************************************************************
This function searches the list of integers as a vector
for the given integer target

If the target is found in the vector true is returned
If the target is not found in the vector false is returned

Note that the parameter is a const reference parameter
this function should NOT modify the list of numbers
***************************************************************/
bool find(const vector<int> &v, int target) {
    for (auto num: v)
        if (num == target)
            return true;
    return false;
}

