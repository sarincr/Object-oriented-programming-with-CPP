#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello\n";
  cout << greeting;
  cout << "..............Append.............. \n" ;
  string firstName = "John ";
  string lastName = "Jaf";
  string fullName = firstName.append(lastName);
  cout << fullName;


  cout << "\n..............Add strings..............\n" ;
  string x = "10";
  string y = "20";
  string z = x + y;
  cout << z;


  cout << "\n ..............Length .............. \n" ;
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
  cout << "\nThe length of the text string is: " << txt.length();



  cout << "\n..............Array.............. \n" ;
  string myString = "Hello";
  cout << myString[1];

  return 0;
}
