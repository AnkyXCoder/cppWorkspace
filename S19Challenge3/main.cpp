// Section 19
// Challenge 3
// Word finder
//
// Ask the user to enter a word
// Process the Romeo and Juliet file and determine how many total words there are
// and how many times the word the user entered appears as a substring of a word in the play.
//
// For example.
// If the user enters: love
// Then the words love, lovely, and beloved will all be considered matches.
// You decide whether you want to be case sensitive or not. My solution is case sensitive
//
// Sample are some sample runs:
//
// Enter the substring to search for: love
// 25919 words were searched...
// The substring love was found 171 times
//
// Enter the substring to search for: Romeo
// 25919 words were searched...
// The substring Romeo was found 132 times
//
// Enter the substring to search for: Juliet
// 25919 words were searched...
// The substring Juliet was found 49 times
//
// Enter the substring to search for: Frank
// 25919 words were searched...
// The substring Frank was found 0 times
//
// Have fun!


#include <iostream>
#include <fstream>
using namespace std;

// return true if the string word_to_find is in the target string
bool find_substring(const string &word_to_find, const string &target) {
    size_t found = target.find(word_to_find);
    if (found == string::npos)
        return false;
    else
        return true;
}

int main() {
    ifstream in_file {};
    string word_to_find {};
    string word_read {};
    int word_count {0};
    int match_count {0};
    
    in_file.open("romeoandjuliet.txt");
     if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }
   
    cout << "Enter the substring to search for: ";
    cin >> word_to_find;
    while (in_file >> word_read) {
        ++word_count;
        if (find_substring(word_to_find, word_read)) {
           ++match_count;
           cout << word_read << " ";
        }        
    }

    cout << word_count << " words were searched..." << endl;
    cout << "The substring " << word_to_find << " was found " << match_count << " times " << endl;
    
    in_file.close();
    cout << endl;
    return 0;
}