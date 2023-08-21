// Read File 4
// Read and display Shakespeare Sonnet 18 poem using unformatted get
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in_file;
    in_file.open("poem.txt");
    if (!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    char c {};
    while (in_file.get(c)) {
        cout << c;
    }
    cout << endl;
    in_file.close();
    return 0;
}