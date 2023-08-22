/*
 * Coding Exercise 37
 * 
 * Complete the code in the function read_file.
 * The file name will be passed to the function by the test harness.
 * Try to open the filename supplied for reading and read each word from the file and display it to cout followed by a std::endl
 * Be sure to test to see if the file was opened successfully.
 * If the file cannot be opened, please display "Error opening file" to std::cerr followed by std::endl
 * You can find my solution by clicking on the solution.txt file on the left pane.
 * But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
 *
 * */

#include <iostream>
#include <fstream>

using namespace std;

void read_file(string file_name) {

    ifstream in_file {file_name};
    if (!in_file)
        cerr <<  "Error opening file" << endl;
    else {
        string word;
        while (in_file >> word) {
            cout << word << endl;
         }
        in_file.close();
    }

}

int main(void) {
    read_file("data.txt");
    return 0;
}