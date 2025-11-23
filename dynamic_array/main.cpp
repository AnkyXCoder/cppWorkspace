#include <stdio.h>
#include <DynamicArray.hpp>

int main(int argc, char **argv)
{
	DynamicArray d1;

    d1.add(5);
    d1.add(7);
    d1.add(6);
    d1.add(8);
    d1.add(9);
    d1.add(10);

    cout << "d1: ";
    d1.print();
    cout << "d1 capacity: " << d1.getCapacity() << endl;

    DynamicArray d2 = d1;
    d2.add(100, 2);

    cout << "d2: ";
    d2.print();
    cout << "d2 capacity: " << d2.getCapacity() << endl;

    DynamicArray d3(d1);

    cout << "d3: ";
    d3.print();

    cout << "d3 capacity: " << d3.getCapacity() << endl;

	return 0;
}
