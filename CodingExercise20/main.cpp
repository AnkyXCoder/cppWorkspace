/* Begin by removing the first name "Isaac" from the string variable journal_entry_1 by using string function 'erase'. Do not forget to also remove the whitespace so that the string variable journal_entry_1 will then contain the string "Newton" with no whitespaces.
 * The journal entries should be sorted alphabetically based on the authors last name.
 * Create an if statement so that if the last name contained within journal_entry_1, then the string values are swapped using the string function 'swap'.
 * You may use either the comparison operators < > in the if statement but remember that following ASCII, "A" is lexicologically lower than "B". */


#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    journal_entry_1.erase(0,6);
    
    if (journal_entry_1 > journal_entry_2) {
        swap(journal_entry_1, journal_entry_2);
//        journal_entry_1.swap(journal_entry_2);
    }
    
    
    cout << journal_entry_1 << "\n" << journal_entry_2;
    return 0;
}