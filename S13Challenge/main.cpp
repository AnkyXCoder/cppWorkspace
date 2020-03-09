// Section 13
// Challenge
/*
For this challenge you are to develop the foundation for a program 
for movie fanatics to keep track of what movies they have watched
and how many times they watched each movie.

The program must support the following:

class Movie - models a movie which includes
- movie name
- movie rating (G, PG, PG-13, R)
- watched - the number of times the movie has been watched

class Movies - models a collection of movie objects

Obviously, Movies needs to know about Movie since it is a collection of Movie object
However, our main driver should only interact with the Movies class.

For example. a simple main should be able to
- create a Movies object
- ask the Movies object to add a movie by providing the movie name, rating and watched count
- ask the Movies object to increment the watched count by 1 for a movie given its name
- ask the Movies object to display all of its movies

Additionally, 
- if we try to add a movie whose name is already in the movies collection 
we should display this error to the user
- if we try to increment the watched count for a movie whose name is not in the movies
collection we should display this error to the user

You can choose to use my starting point or start from scratch.

Here is what your project files should look like:
-Movie.h - include file with the Movie class specification
-Movie.cpp -  file with the Movie class implementation
-Movies.h - include file with the Movies class specification
-Movies.cpp -  file with the Movies class implementation
-main.cpp - the main driver that creates a Movies object and adds and increments movies

Don't create a menu-driven system like we've done in the past -- just concentrate on getting
the program working. Once it is working, you can certainly provide a menu system for the user

Good luck and have fun!
*/

/*
a simple main should be able to
- create a Movies object
- ask the Movies object to add a movie by providing the movie name, rating and watched count
- ask the Movies object to increment the watched count by 1 for a movie given its name
- ask the Movies object to display all of its movies
*/
#include <iostream>
#include <string>
#include "Movies.h"

using namespace std;

// Function prototypes
void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

/******************************************************************
 * increment_watched expects a reference to a Movies object 
 * and the name of the movie to increment the watched count
 *
 * If the watched count was incremented successfully it
*  displays a success message
*  otherwise the watched count could not be incremented
*  because the name of the movie was not found
 * ***************************************************************/
void increment_watched(Movies &movies, string name) {
    if (movies.increment_watched(name)) {
        cout << name << " watch incremented" << endl;
    } else {
        cout << name << " not found" << endl;
    }
}

/******************************************************************
 * add_movie expects a reference to a Movies object 
 * and the name of the movie, the rating and the watched count
 *
 * If the movie was successfully added to the movies object it
*  displays a success message
*  otherwise the movie was not added 
*  because the name of the movie was already in movies
 * ***************************************************************/
void add_movie(Movies &movies, string name, string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        cout << name << " added" << endl;
    } else {
        cout << name << " already exists" << endl;
    }
}

int main(void){
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Big Hero 6", "U", 6);
    add_movie(my_movies, "Star Wars", "U", 5);             // OK
    add_movie(my_movies, "How to Train Your Dragon", "U", 7);            // OK
     
    my_movies.display();   // Big Hero 6, Star Wars, How to Train Your Dragon
    
    add_movie(my_movies, "How to Train Your Dragon", "U", 7);            // Already exists
    add_movie(my_movies, "Ice Age", "U", 12);              // OK
 
    my_movies.display();    // Big Hero 6, Star Wars, How to Train Your Dragon, Ice Age
    
    increment_watched(my_movies, "Big Hero 6");           // OK
    increment_watched(my_movies, "Ice Age");              // OK
    increment_watched(my_movies, "Big");                  // Big not found
    
    my_movies.display();    // Big Hero 6 and Ice Age watched count incremented by 1
    
    increment_watched(my_movies,"XXX");     // XXX not found
    return 0;
}