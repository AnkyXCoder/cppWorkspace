/* Function Definition
 * Area of a circle and Volume of a cylinder
 * 
 * note that, the above two functions are declared BEFORE they are called in the main function.
 * if the are declared before using them leads to error.
 * 
 * return_type function_name(input arguments) {
 *  statements();
 * }
 * */


#include <iostream>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double r) {
    // This function calculates area of a circle with the specified radius of a circle and returns the value
    return pi * r * r;
}

void area_circle(void) {
    // This function asks user for radius of a circle and calculates the area of a circle
    double radius {};
    cout << "\nEnter radious of a circle in cm: ";
    cin >> radius;
    
    cout << "The area of a circle with radius " << radius << " cm is: " << calc_area_circle(radius) << " sq. cm."<< endl;
}

double calc_volume_cylinder(double r, double h) {
    // This function calculates volume of a cylinder with the specified radius and height dimensions and returns the value
//    return pi * r * r * h;
    // following expression is also correct
    return calc_area_circle(r) * h;
    
}

void volume_cylinder(void) {
    // This function asks dimensions of a cylinder and calculates the volume of a cylinder
    
    double radius {};
    double height {};
    
    cout << "\nEnter radius of cylinder in cm: ";
    cin >> radius;
    cout << "Enter height of cylinder in cm: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " cm and height " << height << " cm is: " << calc_volume_cylinder(radius, height) << " cubic cm." << endl;
}

int main(){
    
    area_circle();
    volume_cylinder();
    
    return 0;
}