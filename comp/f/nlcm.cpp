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

ll ngcd(ll x, ll y) {
  while (x != 0) {
    ll tmp = x;
    x = y % x;
    y = tmp;
  }

  return y;
}

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<ll> v;
  rep0(i, N) {
    int e;
    cin >> e;
    v.push_back(e);
  }

  ll g = 0;
  ll res = 1;
  for (auto &&e : v) {
    g = ngcd(res, e);
    res = (res / g) * e;
  }

  cout << res << endl;

  return 0;
}
