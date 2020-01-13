#include <iostream>
using namespace std;

int main(){
    unsigned char fire;
    enum direction {up, down, right, left};
    cout << "Enter you direction (up, down, right, left): ";
    cin >> fire;
    direction heading (fire);
    
    switch(heading){
        case up:
            cout << "Going up" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        case left:
            cout << "Going left" << endl;
            break;
        case down:
            cout << "Going down" << endl;
            break;
        default:
            cout << "Okay" << endl;
    }
    
    return 0;
}