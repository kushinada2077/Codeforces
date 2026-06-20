#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0);
#define si(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define INF 0x3f3f3f3f
using namespace std;
using ll = long long;
using TP = tuple<int, int, int>;
using P = pair<int, int>;
 
ll n, m, k;
int main() {
  fastio;
  cin >> n >> m >> k;
  if (2 * n * m % k) {
    cout << "NO
";
    return 0;
  }
 
  ll p = gcd(n, k), q = k / p, a = n / p, b = 2 * m / q;
  if (2 * m % q || q == 1) {
    p = gcd(2 * n, k), q = k / p, a = 2 * n / p, b = m / q;
  }
 
  cout << "YES
";
  cout << "0 0
";
  cout << a << " 0
";
  cout << "0 " << b << "
";
}