/**
 * @file fraction.cpp
 * @brief Fraction Class implementations
 *
 */

/******************************************************************************/
/* Standard Includes                                                          */
/******************************************************************************/
#include <iostream>

using namespace std;

/******************************************************************************/
/* Custom Includes                                                            */
/******************************************************************************/
#include "fraction.hpp"

/******************************************************************************/
/* Local Variables, Constant, Macro and Type Definitions                      */
/******************************************************************************/

#define xDEBUG

/******************************************************************************/
/* Local Function Definitions: Constructors                                   */
/******************************************************************************/

// Default Constructor - expects two arguments
Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

// Default Destructor
Fraction::~Fraction(void) {
#ifdef DEBUG
    cout << "destructor called for ";
    Fraction::print();
#endif
}

/******************************************************************************/
/* Global Function Definitions: Methods                                       */
/******************************************************************************/

// Print Fraction object value
void Fraction::print(void) const {
    cout << numerator << "/" << denominator << endl;
}

void Fraction::simplify(void) {
    int gcd = 1;
    int j = min(this->numerator, this->denominator);
    
    for(int i = 1; i <= j; i++) {
        if((0 == this->numerator%i) && (0 == this->denominator%i)) {
            gcd = i;
        }
    }
    this->numerator = this->numerator/gcd;
    this->denominator = this->denominator/gcd;
}

// Add given value to this value
void Fraction::add(Fraction &f) {
#ifdef DEBUG
    cout << numerator << "/" << denominator << " + " << f.numerator << "/" << f.denominator;
#endif

    int lcm = denominator * f.denominator;
    int num = (numerator * f.denominator) + (denominator * f.numerator);
    this->numerator = num;
    this->denominator = lcm;

    // simplify fractional number
    simplify();

#ifdef DEBUG
    cout << " = " << numerator << "/" << denominator << endl;
#endif
}

// Subtract given value from this value
void Fraction::sub(Fraction &f) {
#ifdef DEBUG
    cout << numerator << "/" << denominator << " - " << f.numerator << "/" << f.denominator;
#endif

    int lcm = denominator * f.denominator;
    int num = (numerator * f.denominator) - (denominator * f.numerator);
    this->numerator = num;
    this->denominator = lcm;

    // simplify fractional number
    simplify();

#ifdef DEBUG
    cout << " = " << numerator << "/" << denominator << endl;
#endif
}

// Multiply given value with this value
void Fraction::mul(Fraction &f) {
#ifdef DEBUG
    cout << numerator << "/" << denominator << " * " << f.numerator << "/" << f.denominator;
#endif

    this->numerator = numerator * f.numerator;
    this->denominator = denominator * f.denominator;

    // simplify fractional number
    simplify();

#ifdef DEBUG
    cout << " = " << numerator << "/" << denominator << endl;
#endif
}

// Divide given value with this value
void Fraction::div(Fraction &f) {
#ifdef DEBUG
    cout << numerator << "/" << denominator << " / " << f.numerator << "/" << f.denominator;
#endif

    this->numerator = numerator * f.denominator;
    this->denominator = denominator * f.numerator;

    // simplify fractional number
    simplify();

#ifdef DEBUG
    cout << " = " << numerator << "/" << denominator << endl;
#endif
}

/******************************************************************************/
/* Global Function Definitions: Operator Overloading                          */
/******************************************************************************/

// Addition '+' operator overloading
// Add given value to this value and return updated value without updating this value
Fraction Fraction::operator+(Fraction const &f) {
    int lcm = denominator * f.denominator;
    int num = (numerator * f.denominator) + (denominator * f.numerator);

    Fraction fnew(num, lcm);
    // simplify fractional number
    fnew.simplify();
    
    return fnew;
}

// Subtraction '-' operator overloading
// Subtract given value from this value and return updated value without updating this value
Fraction Fraction::operator-(Fraction const &f) {
    int lcm = denominator * f.denominator;
    int num = (numerator * f.denominator) - (denominator * f.numerator);

    Fraction fnew(num, lcm);
    // simplify fractional number
    fnew.simplify();
    
    return fnew;
}

// Multiplication '*' operator overloading
// Multiply given value with this value and return updated value without updating this value
Fraction Fraction::operator*(Fraction const &f) {
    Fraction fnew((numerator * f.numerator), (denominator * f.denominator));
    // simplify fractional number
    fnew.simplify();
    
    return fnew;
}

// Division '/' operator overloading
// Divide given value with this value and return updated value without updating this value
Fraction Fraction::operator/(Fraction const &f) {
    Fraction fnew((numerator * f.denominator), (denominator * f.numerator));
    // simplify fractional number
    fnew.simplify();

    return fnew;
}

// Post increment operator overloading
Fraction& Fraction::operator++(int) {
    numerator = numerator + denominator;
    return *this;
}

// Post decrement operator overloading
Fraction& Fraction::operator--(int) {
    numerator = numerator - denominator;
    return *this;
}