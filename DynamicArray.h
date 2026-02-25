#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <iostream>
using namespace std;

class DynamicArray {
private:
  int *data;
  int size;
  int capacity;

public:
  DynamicArray();
  ~DynamicArray();
  void push(int value);
  int get(int index);
  void print();
  void remove(int index);
  void remote(int index);
};

#endif
