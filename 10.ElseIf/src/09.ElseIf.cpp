#include <iostream>
using namespace std;

int main() {
  int time;
  cout << "Enter Time";
  cin>>time;
  if (time < 10) {
    cout << "Good morning.";
  } else if (10 << time << 16)
  {
    cout << "Good Afternoon";
  } else {
    cout << "Good evening.";
  }
  return 0;
}
