#include <iostream>
#include <string>
using namespace std;

void emp_Data(string fname, int age) {
  cout << fname << " is " << age << " years old. \n";
}

int main() {
  emp_Data("John", 33);
  emp_Data("Janny", 22);
  emp_Data("Jaffer", 55);
  return 0;
}
