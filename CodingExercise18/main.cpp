/* Begin by declaring and initializing the C-style string variable first_name to contain "Bjarne".
 * Now, declare and initialize a second C-style string variable last_name to contain "Stroustrup".
 * Declare a third C-style string variable whole_name but do not initialize it yet.
 * Remember that the variable whole_name must be large enough to contain the first and lat name with no whitespaces.
 * Now, by using the C-style string function strlen, declare and initialize the variable first_name_length to contain the length of the first_name string
 * and the variable last_name_length to contain the length of the last_name string.
 * Using the C-style string function strcpy, copy the first_name string into the whole_name string variable.
 * Now, by using the C-style string function strcat, concatenate the last_name string at the end of the whole_name string.
 * Finally, by using the C-style string function strlen, declare and initialize the variable whole_name_length to contain the length of the whole_name string.
 * */


#include <iostream>
#include <cstring>
//#include <cctype>
using namespace std;

int main() {
    char first_name [20] {"Bjarne"};
    char last_name [20] {"Stroustrup"};
    char whole_name[50];
    
    size_t first_name_length {}, last_name_length {};
    first_name_length = strlen(first_name);
    last_name_length = strlen(last_name);
    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);
    size_t whole_name_length = strlen(whole_name);
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
    return 0;
}