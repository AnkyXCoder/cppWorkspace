#include <iostream>

using namespace std;

int main(){
    
    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nFirst Vowel is: " << vowels[0] << endl;
    cout << "Last Vowel is: " << vowels[4] << endl;
//    
////    cin >> vowels[5];     // This will crash the program, because of Out of bounds.
//    
//    double high_temperatures [] {90.8, 89.8, 77.5, 81.6};
//    cout << "\nThe first high temperature is: " << high_temperatures[0] << endl;
//    
//    high_temperatures [0] = 100.5;
//    cout << "\nThe first high temperature is now: " << high_temperatures[0] << endl;
//    
//    
//    int test_scores [4] {0};    // if array is not initialized with {0}, then result will give junk values.
//    cout << "\nFirst score at index[0] :" << test_scores[0] << endl;
//    cout << "Second score at index[1] :" << test_scores[1] << endl;
//    cout << "Third score at index[2] :" << test_scores[2] << endl;
//    cout << "Fourth score at index[3] :" << test_scores[3] << endl;
//    cout << "Fifth score at index[4] :" << test_scores[4] << endl;
//    
//    cout << "========================" << endl;
//    cout << "Enter values below to update test_scores array : " << endl;
//    
//    cout << "\nFirst score at index[0] : ";
//    cin >> test_scores[0];
//    cout << "Second score at index[1] : ";
//    cin >> test_scores[1];
//    cout << "Third score at index[2] : ";
//    cin >> test_scores[2];
//    cout << "Fourth score at index[3] : ";
//    cin >> test_scores[3];
//    cout << "Fifth score at index[4] : ";
//    cin >> test_scores[4];
//    
//    cout << "========================" << endl;
//    cout << "Updated values of test_scores array are: " << endl;
//    cout << "\nFirst score at index[0] : " << test_scores[0] << endl;
//    cout << "Second score at index[1] : " << test_scores[1] << endl;
//    cout << "Third score at index[2] : " << test_scores[2] << endl;
//    cout << "Fourth score at index[3] : " << test_scores[3] << endl;
//    cout << "Fifth score at index[4] : " << test_scores[4] << endl;
//    
//    cout << "\nNotice what the value of array name is: " << test_scores << endl;

    cout << "========================" << endl;
    cout << "Multi Dimensional array example." << endl;

int movie_rating [3] [4] {//col  0 1 2 3
                                                {0,1,2,3},  // row 0
                                                {2,3,4,5},  // row 1
                                                {4,6,8,9}  // row 2
                                            };
    cout << movie_rating << endl;
    cout << movie_rating[1][3] << endl;     // will give the value of element [1][3] = 5
    cout << movie_rating[2][1] << endl;     // will give the value of element [2][1] = 6
    cin >> movie_rating[1][1];                     // will update the value of element [1][1] from 3 to 9
    cout << "New value of movie_rating[1][1] is:" << movie_rating[1][1] << endl;

    return 0;
}