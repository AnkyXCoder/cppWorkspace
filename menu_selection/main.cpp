#include <iostream>
using namespace std;
int main(){
    
    char selection{};
    do{
        cout << "\n-----------------------" << endl;
        
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        
        cout << "\nEnter your selection: ";
        
        cin >> selection;
        
        switch(selection){
            case '1':{
                cout << "You chose 1 - Doing This." << endl;
                break;
            }
            case '2':{
                cout << "You chose 2 - Doing That." << endl;
                break;
            }
            case '3':{
                cout << "You chose 3 - Doing something else." << endl;
                break;
            }
            case 'q':
            case'Q':{
                cout << "You chose to quit - Quitting." << endl;
                break;
            }
            default:{
                cout << "Invalid selection. Repeating again." << endl;
                break;
            }
        }
                
        
    }while(selection != 'q' && selection != 'Q');
    
    return 0;
}