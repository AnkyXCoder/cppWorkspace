// Section 19
// Formatting output
//============================================================
// In this challenge you are to display the provided data in a nicely formatted table.
//
// There are 3 structures provided. Yes, these could also be classes with public data, 
// but it's common to use structures when we simply want to model only data and not 
// operations as we would with classes.
//
// The structures work together to create a Tours structure that will contain
// information about Tours to India.
// The Tours include Countries, Cities within those countries along with population and cost data for 
// each city tour.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City {
    string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    string name;
    vector<City> cities;
};

struct Tours {
    string title;
    vector<Country> countries;
};

void ruler() {
    cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890\n" << endl;
}

int main()
{
      Tours tours
        { "Tour Ticket Prices from India",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 340000 },
                        { "Cali", 2401000, 360000 },
                        { "Medellin", 2464000, 300000 },
                        { "Cartagena", 972000, 345000 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 570000 },
                        { "Sao Paulo", 11310000, 950000 },
                        { "Salvador", 18234000, 850000 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 550000 }, 
                        { "Santiago", 7040000, 520000 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 725000 } 
                } 
            },
        }
    };

    const int total_width   {70};
    const int field1_width {20};    // Country name
    const int field2_width {20};    // City name
    const int field3_width {15};    // Population
    const int field4_width {15};    // Cost
    
    // Display the Report title header centered in width of total_width
    // You could make this a function for practice

    ruler();
    int title_length = tours.title.length();
    cout << setw((total_width  - title_length )/ 2) << "" << tours.title << endl;
    cout << endl;
    cout << setw(field1_width) << left << "Country" 
                   << setw(field2_width) << left << "City" 
                   << setw(field3_width) << right << "Population" 
                   << setw(field4_width) << right << "Price" 
                   << endl;

    cout << setw(total_width) 
                   << setfill('-') 
                   << "" 
                   << endl;   // display total_width dashes

    cout << setfill(' '); // reset setfill to blank spaces
    cout << setprecision(2) << fixed;                // for displaying the cost with 2 decimal digits
    
    // Note the use of the conditional operator to display the country name or "" for the first country
    
    for(Country country : tours.countries) {
        for (size_t i = 0; i<country.cities.size(); ++i) {
            cout << setw(field1_width) << left <<  ((i == 0) ? country.name : "") // conditional operator
                           << setw(field2_width) << left << country.cities.at(i).name 
                           << setw(field3_width) << right<< country.cities.at(i).population 
                           << setw(field4_width) << right << country.cities.at(i).cost 
                           << endl;
        }
    }
    
    cout << endl << endl;
    return 0;
}