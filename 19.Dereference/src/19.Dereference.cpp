#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Hello CPP";  // Variable declaration
  string* ptr = &food;    // Pointer declaration

  // Reference: Output the memory address of food with the pointer
  cout << ptr << "\n";

  // Dereference: Output the value of food with the pointer
  cout << *ptr << "\n";
  return 0;
}
