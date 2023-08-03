/*
 * User-Defined Exceptions
 * 
 * Best Practices:
 * - throw an object and not a primitive type
 * - throw an object by value
 * - catch an object by reference or const reference
 */
// Miles per Hour - Exception Handling

#include <iostream>
#include <string>

using namespace std;

class DividebyZeroException
{
    
};

class NegativeValueException
{
    
};

double calculate_mph(int miles, int hours)
{
//  Throw Zero Value Error
    if (hours == 0)
    {
        throw DividebyZeroException();
    }

//  Throw Negative Value Error
    if ((miles < 0) || (hours < 0))
    {
        throw NegativeValueException();
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
    catch(const DividebyZeroException &ex)
    {
        cerr << "Sorry, Can't divide by Zero." <<endl;
    }

//  Catch Negative Value Error using String Argument
    catch(const NegativeValueException &ex)
    {
        cerr << "Sorry, Can't have Negative Value." << endl;
    }

//  Catch Any other type of exception handling
    catch(...)
    {
        cerr << "Unknown Error" << endl;
    }
    
    cout << "Bye!!!" << endl;
    
    return 0;
}

