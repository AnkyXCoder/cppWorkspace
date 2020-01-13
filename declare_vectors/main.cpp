#include <iostream>
#include <vector>

using namespace std;

int main(){
//    vector <char> vowels;       // empty
//    vector <char> vowels(5);     // vector of 5 elements initialized to 0
    vector <char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << "\nFirst Vowel is: " << vowels[0] << endl;
    cout << "Last Vowel is: " << vowels[4] << endl;
    
    cin >> vowels[5];     // This will not crash the program, as vector is a boundless array
    cout << vowels [5]<< endl;
    
    vector <double> high_temperatures{90.8, 89.8, 77.5, 81.6};
   cout << "\nThe first high temperature is: " << high_temperatures[0] << endl;
    
    high_temperatures [0] = 100.5;
    cout << "\nThe first high temperature is now: " << high_temperatures[0] << endl;
    
    vector <int> test_scores (5,100);    // vector is initialized with 5 elements, each with 100 value.
    
    /* notice that all outputs are taken with syntax same as arrays.*/
    cout << "\nFirst score at index[0] :" << test_scores[0] << endl;
    cout << "Second score at index[1] :" << test_scores[1] << endl;
    cout << "Third score at index[2] :" << test_scores[2] << endl;
    cout << "Fourth score at index[3] :" << test_scores[3] << endl;
    cout << "Fifth score at index[4] :" << test_scores[4] << endl;
    
    cout << "\nThere are " << test_scores.size() << " elements in test_score vector." << endl;
    cout << "========================" << endl;
    cout << "Enter values below to update test_scores vector : " << endl;
    
    /*notice that vector syntax used here is different than that of array syntax.*/
    cout << "\nFirst score at index[0] : ";
    cin >> test_scores.at(0);
    cout << "Second score at index[1] : ";
    cin >> test_scores.at(1);
    cout << "Third score at index[2] : ";
    cin >> test_scores.at(2);
    cout << "Fourth score at index[3] : ";
    cin >> test_scores.at(3);
    cout << "Fifth score at index[4] : ";
    cin >> test_scores.at(4);
    
    cout << "========================" << endl;
    cout << "Updated values of test_scores vector are: " << endl;
    cout << "\nFirst score at index[0] : " << test_scores[0] << endl;
    cout << "Second score at index[1] : " << test_scores[1] << endl;
    cout << "Third score at index[2] : " << test_scores[2] << endl;
    cout << "Fourth score at index[3] : " << test_scores[3] << endl;
    cout << "Fifth score at index[4] : " << test_scores[4] << endl;
    
    int score_to_add {0};
    
    cout << "Enter the value to add to vector: " << endl;
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    cout << "\nThere are now " << test_scores.size() << " elements in test_score vector." << endl;
    
    
    return 0;
}