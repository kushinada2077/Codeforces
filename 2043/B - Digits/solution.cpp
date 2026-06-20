#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#define PATH "/Users/leedongha/Downloads/PS/input.txt"
#define L_PATH "input.txt"
#define fastio cin.tie(0)->sync_with_stdio(0);
#define rep(n) for (int i = 0; i < n; ++i)
#define si(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define pb(...) push_back(__VA_ARGS__)
#define X first
#define Y second
#define ROOT 1
#define INF 0x3f3f3f3f
using namespace std;
using ll = long long;
using TP = tuple<int, int, int>;
using P = pair<int, int>;
 
int tc, n, d;
int main() {
  fastio;
  cin >> tc;
  while (tc--) {
    cin >> n >> d;
    vector<int> ans;
    for (int i = 1; i <= d; i += 2) {
      if (d % i == 0) ans.pb(i);
    }
    if (n >= 3) {
      if (d % 3 == 0) ans.pb(9);
      ans.pb(3);
      ans.pb(7);
    }
    if (n >= 6) ans.pb(9);
    sort(all(ans));
    ans.erase(unique(all(ans)), ans.end());
    for (auto i : ans) cout << i << " ";
    cout << "
";
  }
}