// Class template - Array

// Note: Since C++11 the STL has array which is a template-based array class
// Use array instead of raw arrays whenever possible

// Note that we can have non-type template parameters
// That's what N is in this case

#include <iostream>
#include <string>

using namespace std;

template <typename T, int N>
class Array {
    int size {N};
    T values[N];

    friend ostream &operator<<(ostream &os, const Array<T, N> &arr) {
        os << "[ ";
        for (const auto &val: arr.values)
            os << val << " ";
        os << "]" << endl;
        return os;
    }
public:
    Array() = default;
    Array(T init_val) {
        for (auto &item: values)
            item = init_val;
    }
    void fill(T val) {
        for (auto &item: values )
            item = val;
    }
    int get_size() const {
        return size;
    }
    // overloaded subscript operator for easy use
    T &operator[](int index) {
        return values[index];
    }
};


int main() {
    
    Array<int, 5> nums;
    cout << "The size of nums is: "<< nums.get_size() << endl;
    cout << nums << endl;
    
    nums.fill(0);
    cout << "The size of nums is: "<< nums.get_size() << endl;
    cout << nums << endl;
    
    nums.fill(10);
    cout << nums << endl;

    nums[0] = 1000;
    nums[3] = 2000;
    cout << nums << endl;
    
    Array<int, 100> nums2 {1};
    cout << "The size of nums2 is: "<< nums2.get_size() << endl;
    cout << nums2 << endl;

    Array<string, 10> strings(string{"Ankit"});
    cout << "The size of strings is: "<< strings.get_size() << endl;
    cout << strings << endl;
    
    strings[0] = string{"Diya"};
    cout << strings << endl;
    
    strings.fill(string{"X"});
    cout << strings << endl;

    
    return 0;
}
