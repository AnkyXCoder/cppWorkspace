/* Passing Pointers to a Function

    const qualifier and Pointers
    - Pointers to constants
        -> The data pointed by the pointers is constant and can't be changed.
        -> Pointer itself can change and point somewhere else.
    - Constant Pointers
        -> The data pointed by the pointer can be changed.
        -> The pointer itself can't change and point to somewhere else.
    - Constant Pointers to Constants
        -> The data pointed by the pointers is constant and can't be changed.
        -> The pointer itself can't change and point to somewhere else.
*/

#include <iostream>

using namespace std;

int main(void) {
    
    int high_score{100}, low_score{40};

// Pointers to constants
    const int *p_score = nullptr;

    p_score = &high_score;
    cout << "p_score is pointing to " << p_score << " having data " << *p_score << endl;
    //*p_score = 86;              // this expression will generate error as it is pointing to a constant data and we are attempting to change that data.
    p_score = &low_score;
    cout << "p_score is pointing to " << p_score << " having data " << *p_score << endl;

    int *const p_2 = &high_score;
    cout << "p_2 is pointing to " << p_2 << " having data " << *p_2 << endl;
    *p_2 = 45;
    cout << "p_2 is pointing to " << p_2 << " and data is changed to " << *p_2 << endl;
    //p_2 = &low_value;           // this expression will generate error as this is a constant pointer and wer trying to change the pointer.

    const int * const p_3 = &high_score;
    // *p_3 = 90;                 //    error, the data can't be changed
    // p_3 = &low_score;          //    error, the pointer can't be changed to pint somewhere else

    return 0;
}