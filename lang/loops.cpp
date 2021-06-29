#include <iostream>

using namespace std;

void loops() {
  int i = 0;
  // while loop
  while (++i < 10)
    cout << i << " ";

  cout << endl;

  int j = 0;
  for (int j = 0; j < 10; ++j)
    cout << j << " ";

  cout << endl;
}

int main() { loops(); }