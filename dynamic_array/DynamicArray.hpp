#ifndef __DYNAMIC_ARRAY_H__
#define __DYNAMIC_ARRAY_H__

#include <iostream>
#include <cstdint>

using namespace std;

class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    DynamicArray() {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(int c, int initVal) {
        nextIndex = 0;
        capacity = c;
        data = new int[capacity];
        for(int idx = 0; idx < nextIndex; idx++) {
            this->data[idx] = initVal;
        }
    }

    DynamicArray(DynamicArray const &d) {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;

        // deep copy
        this->data = new int[d.capacity];
        for(int idx = 0; idx < nextIndex; idx++) {
            this->data[idx] = d.data[idx];
        }
    }

    void operator=(DynamicArray const &d) {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;

        this->data = new int[d.capacity];
        for(int idx = 0; idx < nextIndex; idx++) {
            this->data[idx] = d.data[idx];
        }
    }

    void add(int element) {
        if (nextIndex == capacity) {
            if (capacity == UINT8_MAX) {
                return;
            }

            int *newData = new int[2 * capacity];
            for (int idx = 0; idx < capacity; idx++) {
                newData[idx] = data[idx];
            }
            
            delete []data;
            data = newData;
            capacity = 2 * capacity;
        }
        this->data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int idx) {
        if (idx <= capacity) {
            this->data[idx] = element;
        }
    }

    int get(int idx) const {
        if(idx >= 0 && idx < nextIndex) {
            return data[idx];
        } else {
            return -1;
        }
    }

    int getCapacity(void) const {
        return capacity;
    }

    void print(void) const {
        for (int idx = 0; idx < capacity; idx++) {
            cout << data[idx] << " ";
        }

        cout << endl;
    }

    ~DynamicArray() {
        delete []data;
    }

};

#endif // __DYNAMIC_ARRAY_H__
