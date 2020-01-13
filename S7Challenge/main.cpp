#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "First element of the vector1 is:" << vector1.at(0) << endl;
    cout << "Second element of the vector1 is:" << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements"<< endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "First element of the vector2 is:" << vector2.at(0) << endl;
    cout << "Second element of the vector2 is:" << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements"<< endl;
    
    vector < vector <int> > vect_2d;
    vect_2d.push_back(vector1);
    vect_2d.push_back(vector2);
    
    /* this will create the vect_2d as {col 0   1 
     *                                                      {10, 20},       row 0
     *                                                      {100,200}     row 1
     *                                                  }                       */
    
    cout << "The elements of the vect-2d are:" <<endl;
    cout << vect_2d.at(0).at(0) << " " << vect_2d.at(0).at(1) << endl;
    cout << vect_2d.at(1).at(0) << " " << vect_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    
   cout << "The elements of the vect-2d are:" <<endl;
    cout << vect_2d.at(0).at(0) << " " << vect_2d.at(0).at(1) << endl;
    cout << vect_2d.at(1).at(0) << " " << vect_2d.at(1).at(1) << endl;
    
    cout << "First element of the vector1 is:" << vector1.at(0) << endl;
    return 0;
}