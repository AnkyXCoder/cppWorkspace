// Class  templates
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Template classes are typically completely contained in header files

template <typename T>
class Item {
private:
    string name;
    T   value;
public:
    Item(string name, T value) : name{name}, value{value} 
    {}
    string get_name() const {return name; }
    T get_value() const { return value; }
};

template <typename T1, typename T2>
struct My_Pair {
    T1 first;
    T2 second;
};

int main() {
    
    Item<int> item1 {"Ankit", 100};
    cout << item1.get_name() << " " << item1.get_value() << endl;
    
    Item  <string> item2 {"Ankit", "Professor"};
    cout << item2.get_name() << " " << item2.get_value() << endl;
    
    Item <Item<string>> item3 {"Ankit",  {"C++", "Professor"}};
    cout << item3.get_name() << " " 
                    << item3.get_value().get_name() << " "
                    << item3.get_value().get_value() << endl;
    
    cout << "\n================================" << endl;
    vector<Item<double>> vec {};
    vec.push_back (Item<double>("Larry", 100.0));
    vec.push_back (Item<double>("Moe", 200.0));
    vec.push_back (Item<double>("Curly",300.0));
    
    for (const auto &item: vec) {
        cout << item.get_name() << " " << item.get_value() << endl;
    }
   
    cout << "\n================================" << endl;
    My_Pair <string, int> p1 {"Ankit", 100};
    My_Pair <int, double> p2 {124, 13.6};

    cout << p1.first << ", " << p1.second << endl;
    cout << p2.first << ", " << p2.second << endl;
    
    return 0;
}
