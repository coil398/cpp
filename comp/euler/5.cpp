#include <iostream>
using namespace std;

#define N 20

int main() {
  int res = N;
  while (true) {
    bool flag = true;
    for (int i = 1; i <= N; ++i) {
      if (res % i != 0) {
        flag = false;
      }
    }
    if (flag) {
      break;
    }
    res += N;
  }
  cout << res << endl;
  return 0;
}
