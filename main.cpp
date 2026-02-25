#include "DynamicArray.h"
#include <iostream>
using namespace std;

int readInt(const string &prompt) {
  int value;
  cout << prompt;
  cin >> value;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(100, '\n');
    return -1;
  }
  return value;
}

void printMenu() {
  cout << "\n1. Push" << endl;
  cout << "2. Get" << endl;
  cout << "3. Remove" << endl;
  cout << "4. Print" << endl;
  cout << "5. Quit" << endl;
  cout << "=> ";
}

int main() {
  DynamicArray arr;
  cout << "Welcome to Dynamic Array" << endl;

  while (true) {
    printMenu();

    int choice = readInt("");
    if (choice == -1) {
      cout << "Invalid input" << endl;
      continue;
    }

    if (choice == 1) {
      int value = readInt("Enter number: ");
      if (value == -1) {
        cout << "Invalid input" << endl;
        continue;
      }
      arr.push(value);

    } else if (choice == 2) {
      int index = readInt("Enter index: ");
      if (index == -1) {
        cout << "Invalid input" << endl;
        continue;
      }
      cout << "Value: " << arr.get(index) << endl;

    } else if (choice == 3) {
      int index = readInt("Enter index: ");
      if (index == -1) {
        cout << "Invalid input" << endl;
        continue;
      }
      arr.remove(index);

    } else if (choice == 4) {
      arr.print();

    } else if (choice == 5) {
      break;

    } else {
      cout << "Choose a valid option (1-5)" << endl;
    }
  }

  cout << "Goodbye!" << endl;
  return 0;
}
