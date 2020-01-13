/* This program demonstrates the variuos functions related to random numbers.
 * Random numbers generation requires <cstdlib>.
 * for more information on rendom number generation, refer to : https://en.cppreference.com/w/cpp/numeric/random
 * */


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    int random_number {};
    size_t count {10};                  // number of random numbers to generate
    int min {1};                            // minimum count of random number length
    int max {100};                            // maximum count of random number length
    
    // seeding the random number generator
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
    // if not seeded the generator, same radom number is generated every time.
    
    for (size_t i{1}; i <= count; i++) {
        random_number = rand() % max + min;     // generate a random number [min, max], including min and max
        cout << random_number << endl;
    }
    
    cout << endl;
    
    return 0;
}