// Mile per Hour - Exception Handling

#include <iostream>

using namespace std;

double calculate_mph(int miles, int hours)
{
    if (hours == 0)
    {
        throw 0;
    }
    
    return static_cast<double> (miles) / hours;
}

int main(void)
{
    int miles {};
    int hours {};
    double miles_per_hour {};
    
    cout << "Enter the miles travelled:";
    cin >> miles;
    cout << "Enter the hours:";
    cin >> hours;
    
//    Exception Handling
    try
    {
        calculate_mph(miles, hours);
        cout << "Miles per Hour: " << miles_per_hour << endl;
    }

    catch(int &ex_err)
    {
        cerr << "Sorry, Can't divide by Zero." <<endl;
    }
    
    cout << "Bye!!!" << endl;
    
    return 0;
}