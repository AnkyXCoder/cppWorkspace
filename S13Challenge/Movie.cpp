/******************************************************************
 * Section 13 Challenge
 * Movie.cpp
 * 
 * Models a Movie with the following atttributes
 * 
 * std::string name - the name of the movie 
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
#include <iostream>
#include "Movie.h"

using namespace std;

// Implemention of the construcor

Movie::Movie(string name, string rating, int watched) 
    : name(name), rating(rating), watched(watched)  {
}

//Implemention of the copy constructor
Movie::Movie(const Movie &source) 
    : Movie{source.name, source.rating, source.watched} {
}

// Implementation of the destructor
Movie::~Movie() {
}

// Implementation of the display method
// should just insert the movie attributes to cout

void Movie::display() const {
    cout << name << ", " << rating << ", " << watched << endl;
}
