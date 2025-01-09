#include <iostream>
#define ll long long
using namespace std;

ll egcd(ll A, ll B) {
  while (A >= 1 && B >= 1) {
    if (A > B) {
      A %= B;
      continue;
    }
    B %= A;
  }

  if (A == 0) {
    return B;
  }
  return A;
}

// Example
int main() {
  ll A = 777;
  ll B = 123;
  ll res = egcd(A, B);
  cout << res << endl;
}
