#include <cmath>
#include <iostream>
using namespace std;

bool is_prime(int num) {
  if (num == 2 || num == 3) {
    return true;
  }
  if (num % 2 == 0 || num % 3 == 0) {
    return false;
  }
  int i = 5;
  while (i * i <= num) {
    if (num % i == 0 || num % (i + 2) == 0) {
      return false;
    }
    i += 6;
  }
  return true;
}

int main() {
  int num = 2;
  int idx = 0;
  int nth = 10001;
  while (true) {
    if (is_prime(num)) {
      idx++;
      if (idx == nth) {
        cout << num << endl;
        return 0;
      }
    }
    num++;
  }
}
