#include <iostream>
using namespace std;

long long N, S, A[61];

int main() {
  cin >> N >> S;
  for (int i = 1; i <= N; ++i)
    cin >> A[i];

  for (long long i = 1; i < (1LL << N); ++i) {
    long long sum = 0;
    for (int j = 1; j <= N; ++j) {
      if ((i & (1LL << (j - 1))) != 0LL)
        sum += A[j];
    }
    if (sum == S) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
