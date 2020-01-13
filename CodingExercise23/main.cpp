/* Create a program that will be used to automatically print a grocery list. Most weeks the grocery list is the same and so you may begin by declaring the fuction prototype print_grocery_list which has the default argument values: 
 * mangos = 13
 * apples = 3
 * oranges = 7
 * The function print_grocery_list has no return statement and so the return type of the function prototype should be void.
 * Print this weeks grocery list by calling the function.
 * Print next week grocery list with 5 apples.
 * Print final week grocery list with 7 apples and 11 oranges and default mangos.
 * 
 * */

#include <iostream>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPE BELOW THIS LINE----

void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);
void modify_grocery_list(void);

//----WRITE YOUR FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

int main() {
    modify_grocery_list();
}
void modify_grocery_list() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
     print_grocery_list();
     
     print_grocery_list(5);
     
     print_grocery_list(7, 11);
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

void print_grocery_list(int apples, int oranges, int mangos) { //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                     //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}