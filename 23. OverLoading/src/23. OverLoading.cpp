#include <iostream>
using namespace std;

int sumint(int x, int y)
{
  return x + y;
}

double sumfloat(double x, double y)
{
  return x + y;
}

int main() {
  int xint= sumint(8, 5);
  double xfloat = sumfloat(4.3, 6.26);
  cout << "Add Integer =: " <<xint<< "\n";
  cout << "Float Add =: " << xfloat;
  return 0;
}
