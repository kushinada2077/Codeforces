#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0);
#define si(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define INF 0x3f3f3f3f
using namespace std;
using ll = long long;
using TP = tuple<int, int, int>;
using P = pair<int, int>;
 
int n, d, m;
int main() {
  fastio;
  cin >> n >> d >> m;
  for (int x, y, i = 0; i < m; ++i) {
    cin >> x >> y;
    if (-d <= x - y && x - y <= d && d <= x + y && x + y <= 2 * n - d) cout << "YES
";
    else cout << "NO
";
  }
}