#include <iostream>
using namespace std;

class BaseClass{
  public:
    void BaseMethod()
    {
      cout << "Hello World!";
    }
};

int main() {
  BaseClass obj;
  obj.BaseMethod();
  return 0;
}
