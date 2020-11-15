#include <iostream>
using namespace std;

class BaseClass
{
  public:
    void base_method();
};


void BaseClass::base_method()
{
  cout << "Hello World!";
}

int main()
{
  BaseClass obj;
  obj.base_method();
  return 0;
}
