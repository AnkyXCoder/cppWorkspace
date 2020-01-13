/* Create a program that computes the area of two shapes, a square and a rectangle, by calling the overloaded function find_area
 * */

#include <iostream>

using namespace std;

// Function Prototypes
void area_calc(void);
int find_area(int side_length);
double find_area(double, double);

int main(){
    
    area_calc();
    
    return 0;
}


// Function Declarations

void area_calc(void) {
    
    int square_area{0};
    double rectangle_area{0};
    
    square_area = find_area(2);
    rectangle_area = find_area(4.5, 2.3);
    
    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
    
}

int find_area(int side_length) {
    return side_length * side_length;
// if using cmath header, the following is also true
//  return pow(side_length, 2)
}

double find_area(double length, double width) {
    return length * width;
}