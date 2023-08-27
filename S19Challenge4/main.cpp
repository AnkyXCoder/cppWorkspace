// Challenge 4 - Solution
// Copy Romeo and Juliet with line numbers
//
// This challenge should be pretty easy.
// I have provided the text to Romeo and Juliet in a file named romeoandjuliet.txt
//
// For this challenge you have to make copy of the Romeo and Juliet file and save it to another file.
// This new copy should have line numbers at the beginning of each line in the play.
// Please format the numbers nicely so everything lines up.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ifstream in_file {"romeoandjuliet.txt"};
    ofstream out_file {"romeoandjuliet_out.txt"};
    if (!in_file.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }
     if (!in_file.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }
    
    string line{};
    int line_number {0};
    while (getline(in_file, line)) {
        if (line == "")
            out_file << endl;
        else {
            ++line_number;
            out_file << setw(7) << left << line_number
                     << line << endl;
        }
    }
    cout << "\nCopy complete" << endl;
    in_file.close();
    out_file.close();
    return 0;
}