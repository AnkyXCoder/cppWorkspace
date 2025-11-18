#include <stdio.h>
#include "fraction.hpp"

using namespace std;

int main(int argc, char **argv)
{
	Fraction f1(5, 4);
    cout << "f1: ";
    f1.print();

    Fraction f2(3, 5);
    cout << "f2: ";
    f2.print();

    Fraction f3(7, 8);
    cout << "f3: ";
    f3.print();
    
    Fraction f4(1, 3);
    cout << "f4: ";
    f4.print();

    Fraction f5(2, 5);
    cout << "f5: ";
    f5.print();

    cout << "class methods examples" << endl;

    // addition
    f1.add(f2);
    cout << "f1.add(f2): ";
    f1.print();

    // subtration
    f1.sub(f3);
    cout << "f1.sub(f3): ";
    f1.print();

    // multiplication
    f4.mul(f3);
    cout << "f4.mul(f3): ";
    f4.print();

    // divison
    f5.div(f2);
    cout << "f5.div(f2): ";
    f5.print();

    cout << "operator overloading examples" << endl;
    
    Fraction f6 = f2 + f3;
    cout << "f6 = f2 + f3 = ";
    f6.print();

    Fraction f7 = f2 - f3;
    cout << "f7 = f2 - f3 = ";
    f7.print();

    Fraction f8 = f4 * f5;
    cout << "f8 = f4 * f5 = ";
    f8.print();
    
    Fraction f9 = f4 / f5;
    cout << "f9 = f4 / f5 = ";
    f9.print();

    cout << "f4++: ";
    f4++;
    f4.print();

    cout << "f5--: ";
    f5--;
    f5.print();

	return 0;
}
