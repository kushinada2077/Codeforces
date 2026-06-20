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
 
const int MX = 2e5 + 5;
int tc, n;
ll tot, value[3][MX];
 
void init() { tot = 0; }
int main() {
  fastio;
  cin >> tc;
  while (tc--) {
    init();
    cin >> n;
    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < n; ++j) {
        cin >> value[i][j];
        if (i == 0) tot += value[i][j];
      }
    }
 
    tot = (tot + 2) / 3;
 
    vector<int> people = {0, 1, 2};
    bool imposs = true;
 
    do {
      bool poss = true;
      int l = 0, r = 0;
      vector<P> ans(3);
      for (int i = 0; i < 3; ++i) {
        int numPerson = people[i];
        ll sum = 0;
        while (r < n && sum < tot) sum += value[numPerson][r++];
        if (i == 2) r = n;
        ans[numPerson] = P(l, r - 1);
        l = r;
        if (sum < tot) poss = false;
      }
 
      if (poss) {
        for (auto [l, r] : ans) {
          cout << l + 1 << " " << r + 1 << " ";
        }
        cout << "
";
        imposs = false;
        break;
      }
    } while (next_permutation(all(people)));
 
    if (imposs) cout << "-1
";
  }
}