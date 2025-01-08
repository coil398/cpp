#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rep0(i, n) for (int i = 0; i < n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#ifdef DEBUG
#define dbg(x) cerr << #x << " = " << x << endl
#else
#define dbg(x)
#endif

bool is_prime(long long n) {
  if (n < 2)
    return false;

  if (n == 2 || n == 3)
    return true;

  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (long long i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }

  return true;
}

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n = 2000000;

  ll sum = 0;

  rep(i, 2, n) {
    if (is_prime(i)) {
      dbg(i);
      sum += i;
    }
  }
  cout << sum << endl;

  return 0;
}
