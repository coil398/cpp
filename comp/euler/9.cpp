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

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);

  rep(i, 1, 1000) {
    rep(j, i + 1, 1000) {
      int k = 1000 - i - j;
      if (i * i + j * j == k * k) {
        cout << i << " " << j << " " << k << endl;
        cout << i * j * k << endl;
        return 0;
      }
    }
  }

  return 0;
}
