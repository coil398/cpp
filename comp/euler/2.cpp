#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int b = 2;
  int sum = 0;
  while (a <= 4000000) {
    if (a % 2 == 0)
      sum += a;
    int tmp = b;
    b = a + b;
    a = tmp;
  }
  cout << sum << endl;
}
