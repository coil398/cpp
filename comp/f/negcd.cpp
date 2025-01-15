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

ll egcd(ll x, ll y) {
  if (x == 0)
    return y;
  return egcd(y % x, x);
}

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<ll> v = {24, 40, 60, 80, 90, 120};
  ll res = 0;

  for (auto &&e : v) {
    dbg(res);
    res = egcd(res, e);
  }

  cout << res << endl;

  return 0;
}