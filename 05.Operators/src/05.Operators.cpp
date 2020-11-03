#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << x + y;
  cout << x-y << "\n";
  cout << x-y << "\n";
  cout << x*y << "\n";
  cout << x/y << "\n";
  cout << x%y << "\n";
  x += 3;
  cout << x << "\n";
  x %= 3;
  cout << x << "\n";
  x -= 3;
  cout << x << "\n";
  x *= 3;
  cout << x << "\n";
  x /= 3;
  cout << x << "\n";
  x &= 3;
  cout << x << "\n";
  x |= 3;
  cout << (x != y) << "\n";
  return 0;
}
