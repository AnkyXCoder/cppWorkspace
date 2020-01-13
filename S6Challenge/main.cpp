#include <iostream>
using namespace std;
int main(){
    const double cost_per_small_room {25.00};
    const double cost_per_large_room {35.00};
    int numbers_of_small_rooms {0};
    int numbers_of_large_rooms {0};
    const double sale_tax {0.06};
    const int estimate_expiry {30};
    cout << "Welcome to AnkyX's Carpet Cleaning Service." << endl;
    
    cout << "How many small rooms would you like cleaned? ";
    cin >> numbers_of_small_rooms;
    
    cout << "How many large rooms would you like cleaned?  ";
    cin >> numbers_of_large_rooms;
       
    cout << "\nEstimate for Carpet Cleaning Service:" << endl;
    cout << "Numbers of Small Rooms: " << numbers_of_small_rooms << endl;
    cout << "Numbers of Large Rooms: " << numbers_of_large_rooms << endl;
    cout << "Cost per Small Room: " << cost_per_small_room << " $" << endl;
    cout << "Cost per Large Room: " << cost_per_large_room << " $" << endl;
    double cost = (numbers_of_small_rooms * cost_per_small_room) + (numbers_of_large_rooms * cost_per_large_room);
    double tax_cost = sale_tax * cost;
    cout << "Cost: $ " << cost << endl;
    cout << "Tax: $ " << tax_cost << endl;
    cout << "============================" << endl;
    cout << "Total Estimate: $ " << cost+tax_cost << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
    cout << endl;
    
    return 0;
}