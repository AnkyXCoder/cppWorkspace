/*  While Loop Exercise
 * Given a vector of integers, determine how many integers are present before you see the value -99.
 * Note, it's possible that -99 is not in the vector! If -99 is not available in the vector then the result iwill be equal to the number of elements in the vector.
 * The final result will be equal to the number of elements in the vector.
 * The final result will be stored in an integer variable named count.
 * You can try the following program by changing the vector elements as well as changing the comparison element. 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    const vector <int> vec {10,20,30,-99,25,85};
    cout << "Given vector elements are: " << endl;
    cout << vec.at(0) << " " << vec.at(1) << " " << vec.at(2) << " " << vec.at(3) << " " << vec.at(4) << " " << vec.at(5) << endl;
    int count {0};
    size_t index{0};
    
    while (index < vec.size() && vec.at(index) != -99){
        index++;
        count++;
    }
    
    cout << "There are total " << count << " elements are in the given vector before element (-99)." << endl;
    return 0;
}
