#include <iostream>
using namespace std;

int main() {
  long long n = 600851475143;
  long long f = 2;
  while (f * f <= n) {
    if (n % f == 0) {
      n /= f;
      continue;
    }
    ++f;
  }
  cout << n << endl;
}
