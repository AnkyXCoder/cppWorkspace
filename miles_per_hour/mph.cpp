// Mile per Hour - Exception Handling

#include <iostream>

using namespace std;

int main(void)
{
    int miles {};
    int hours {};
    double miles_per_hour {};
    
    cout << "Enter the miles travelled:";
    cin >> miles;
    cout << "Enter the hours:";
    cin >> hours;
    
    
//    No Exception Handling
//    if (hours != 0)
//    {
//        miles_per_hour = static_cast<double> (miles) / hours;
//        cout << "Miles per Hour: " << miles_per_hour << endl;
//    }
//    else
//    {
//        cerr << "Sorry, Can't divide by Zero." <<endl;
//    }

//    Exception Handling
    try
    {
        if (hours == 0)
        {
            throw 0;
        }
        miles_per_hour = static_cast<double> (miles) / hours;
        cout << "Miles per Hour: " << miles_per_hour << endl;
    }

    catch(int &ex_err)
    {
        cerr << "Sorry, Can't divide by Zero." <<endl;
    }
    
    return 0;
}