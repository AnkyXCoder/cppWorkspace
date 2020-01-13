/* Nested Loops - Sum of the Produt of all pairs of Vector Elements
 * Given a vector of integers named vec, that is provided here, find the sum of the product pf all pairs of vector elements.
 * An integer named result is declared and the final answer is stored in this variable.
 * For example, the given vector vec is {1,2,3}, the possible product pairs are (1*2), (1*3), and (2*3).
 * And the result would be  = (1*2) + (1*3) + (2*3) = 11.
 * Try the following example by changing elemts and numbers of elements.
 * Note that, if vector is empty or has only 1 element then answer should be 0.
 */

#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    const vector <int> vec{10,2,0,5,8,15,8};
    
    int result{};
    
    for (size_t i=0; i< vec.size(); ++i)
       for (size_t j=i+1; j< vec.size(); ++j) 
            result = result + vec.at(i) * vec.at(j);
    return 0;
}
