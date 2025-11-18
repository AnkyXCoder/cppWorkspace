/**
 * @file fraction.hpp
 * @brief Fraction Class
 *
 */

#ifndef __FRACTION_H__
#define __FRACTION_H__

/******************************************************************************/
/* Standard Includes                                                          */
/******************************************************************************/

#include <iostream>
using namespace std;

/******************************************************************************/
/* Class Definitions                                                          */
/******************************************************************************/

class Fraction {
private:
    // attributes
    int numerator;
    int denominator;
    
    void simplify(void);

public:
    
    /* Constructors */
    
    // Default Constructor - expects two arguments
    Fraction(int numerator, int denominator);

    // Default Destructor
    ~Fraction(void);

    /* Methods */

    // Print Fraction object value
    void print(void) const;

    // Add given value to this value
    void add(Fraction &f);

    // Subtract given value from this value
    void sub(Fraction &f);

    // Multiply given value with this value
    void mul(Fraction &f);

    // Divide given value with this value
    void div(Fraction &f);

    /* Operator Overloading */

    // Addition '+' operator overloading
    // Add given value to this value and return updated value without updating this value
    Fraction operator+(Fraction const &f);

    // Subtraction '-' operator overloading
    // Subtract given value from this value and return updated value without updating this value
    Fraction operator-(Fraction const &f);

    // Multiplication '*' operator overloading
    // Multiply given value with this value and return updated value without updating this value
    Fraction operator*(Fraction const &f);

    // Division '/' operator overloading
    // Divide given value with this value and return updated value without updating this value
    Fraction operator/(Fraction const &f);

    // Post increment operator overloading
    Fraction& operator++(int);

    // Post decrement operator overloading
    Fraction& operator--(int);
};

#endif /* __FRACTION_H__ */
