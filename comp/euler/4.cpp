#include <iostream>
using namespace std;

int main() {
  int max = 0;
  for (int i = 100; i < 1000; ++i) {
    for (int j = 100; j <= i; ++j) {
      int n = i * j;
      int rev = 0;
      for (int k = n; k > 0; k /= 10) {
        rev = rev * 10 + k % 10;
      }
      if (n == rev && n > max) {
        max = n;
      }
    }
  }
  cout << max << endl;
}
