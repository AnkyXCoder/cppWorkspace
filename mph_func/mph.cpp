// Mile per Hour - Exception Handling

#include <iostream>
#include <string>

using namespace std;

double calculate_mph(int miles, int hours)
{
//  Throw Zero Value Error
    if (hours == 0)
    {
        throw 0;
    }

//  Throw Negative Value Error
    if ((miles < 0) || (hours < 0))
    {
        throw string{"Negative Value Error"};
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
    
//  Exception Handling
    try
    {
        calculate_mph(miles, hours);
        cout << "Miles per Hour: " << miles_per_hour << endl;
    }

// Catch Zero Value Error using Integer Argument
    catch(int &ex_err)
    {
        cerr << "Sorry, Can't divide by Zero." <<endl;
    }

//  Catch Negative Value Error using String Argument
    catch(string &ex)
    {
        cerr << ex << endl;
    }

//  Catch Any other type of exception handling
    catch(...)
    {
        cerr << "Unknown Error" << endl;
    }
    
    cout << "Bye!!!" << endl;
    
    return 0;
}