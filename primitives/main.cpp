#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;
int main(){
    
    /**********************
     * Character Type
     *********************/
    char middle_initial {'B'};
    cout << "My middle initial is " << middle_initial << "." << endl;
    /**********************
     * Integer Types
     *********************/    
     unsigned short int exam_score {55};
     cout << "My exam score is " << exam_score << "." << endl;
     
     int candidates_present {62};
     cout << "Total " << candidates_present << " candidates were present in the meeting yesterday." << endl;
     
     long people_in_gujarat {2020000};
     cout << "There are about " << people_in_gujarat << " people in Gujarat." << endl;
     
     long long people_on_earth {7'600'000'000};
     cout << "There are about " << people_on_earth << " people on earth." << endl;
     
     long long distance_to_alpha_centauri {9'461'000'000'000};
     cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers from earth." << endl;
     
     /**********************
     * Floating Types
     *********************/
     float car_payment {231.48};
     cout << "My car payment is " << car_payment << "." <<endl;
     
     double pi {3.14159};
     cout << "Pi is " << pi << endl;
     
     long double large_amount {2.7e120};
     cout << large_amount << " is a very large amount." << endl;
     
     /**********************
     * Boolean Types
     *********************/
     bool game_over {true};
     cout << "The value of game is " << game_over << endl;
     
     /**********************
     * Overflow Example
     *********************/
     short value1 {30000};
     short value2 {1000};
     long product {value1 * value2};
     cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
     
     cout << "sizeof information" << endl;
     cout << "==================================" << endl;
     
     cout << "char: " << sizeof(char) << " bytes" << endl;
     cout << "int: " << sizeof(int) << " bytes" << endl;
     cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
     cout << "short: " << sizeof(short) << " bytes" << endl;
     cout << "long: " << sizeof(long) << " bytes" << endl;
     cout << "long long: " << sizeof(long long) << " bytes" << endl;
     cout << "==================================" << endl;
     
     cout << "float: " << sizeof(float) << " bytes" << endl;
     cout << "double: " << sizeof(double) << " bytes" << endl;
     cout << "long double: " << sizeof(long double) << " bytes" << endl;
     
     cout << "==================================" << endl;
     cout << "Minimum Values" << endl;
     cout << "char: " << CHAR_MIN << endl;
     cout << "int: " << INT_MIN << endl;
     cout << "short: " << SHRT_MIN << endl;
     cout << "long: " << LONG_MIN << endl;
     cout << "long long: " << LLONG_MIN << endl;
     
     cout << "==================================" << endl;
     
     cout << "Maximum Values" << endl;
     cout << "char: " << CHAR_MAX << endl;
     cout << "int: " << INT_MAX << endl;
     cout << "short: " << SHRT_MAX << endl;
     cout << "long: " << LONG_MAX << endl;
     cout << "long long: " << LLONG_MAX << endl;
     
     cout << "==================================" << endl;
     return 0;
}