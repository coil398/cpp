#include <vector>
#define ll long long
using namespace std;

vector<ll> factors(ll n) {
  vector<ll> f;
  for (ll i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      f.push_back(i);
      n /= i;
    }
  }
  return f;
}
