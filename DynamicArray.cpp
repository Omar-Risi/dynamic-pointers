#include "DynamicArray.h"

DynamicArray::DynamicArray() {
  capacity = 2;
  size = 0;
  data = new int[capacity];
}

void DynamicArray::push(int value) {

  if (size == capacity) {
    capacity *= 2;
    int *newArray = new int[capacity];

    for (int i = 0; i < size; i++) {
      newArray[i] = data[i];
    }

    delete[] data; // free data from memory
    data = newArray;
  }

  // add to the end of array
  data[size] = value;
  size++;
}

int DynamicArray::get(int index) {

  if (index < 0 || index >= capacity) {
    cout << "error: Index out of bounds!" << endl;
    return -1;
  }

  return data[index];
}

void DynamicArray::print() {
  cout << "[";
  for (int i = 0; i < size; i++) {
    cout << data[i];
    if (i < size - 1)
      cout << ",";
  }
  cout << "]";
  cout << endl;
}

void DynamicArray::remove(int index) {
  if (index < 0 || index > size - 1) {
    cout << "error: invalid index" << endl;
    return;
  }

  for (int i = index; i < size - 1; i++) {
    data[i] = data[i + 1];
  }

  size--;
}

DynamicArray::~DynamicArray() { delete[] data; }
