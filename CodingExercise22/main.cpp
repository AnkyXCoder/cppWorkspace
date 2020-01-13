/* Functions and Prototypes - Cinverting Temperatures
 * 
 * Create a program that will be used to convert Fahrenheit temperatures to Celcius and Kelvin Temperatures through the use of two functions.
 * 
 * For this program, assume that temperature will be represented as a double value.
 * 
 * Formulaes
 * 
 * Fahrenheit to Celcius
 * C = (5.0/9.0) * (temperature - 32)
 * 
 * Fahrenheit to Kelvin
 * F = (5.0/9.0) * (temperature - 32) +273
 * 
 * */

#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);
void temperature_conversion(double);

int main() {
    double temperature {};
    cout << "\nEnter temperature in Fahrenheit: ";
    cin >> temperature;
    temperature_conversion(temperature);
    return 0;
}

void temperature_conversion(double fahrenheit_temperature) {
    
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin." << endl;
}


double fahrenheit_to_celsius(double temperature) {
    return round(((temperature - 32)*5)/9);
} 

double fahrenheit_to_kelvin(double temperature) {
    return round(((temperature - 32)*5)/9 + 273);
}