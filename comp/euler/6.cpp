#include <iostream>
using namespace std;

int main() {
  int N = 100;
  int sum = 0;
  int doubled_sum = 0;

  for (int i = 1; i <= N; ++i) {
    sum += i;
    doubled_sum += i * i;
  }

  cout << sum * sum - doubled_sum << endl;
}
