#include <iostream>
#include <string>
using namespace std;

class Sample_Class {
  	public:
    int x;
    string y;
};

int main()
{
  Sample_Class obj;
  obj.x = 100;
  obj.y = "Hello OOPs";
  cout << obj.x << "\n";
  cout << obj.y;
  return 0;
}
