#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <vector>
#define ll long long
#define fastio cin.tie(0)->sync_with_stdio(0);
#define FOR_IN_1(n) for (int i = 0; i < n; ++i)
#define FOR_IN_2(i, n) for (int i = 0; i < n; ++i)
#define FOR_IN_3(i, m, n) for (int i = m; i < n; ++i)
#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define for_in(...) GET_MACRO(__VA_ARGS__, FOR_IN_3, FOR_IN_2, FOR_IN_1)(__VA_ARGS__)
#define si(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define pb(...) push_back(__VA_ARGS__)
using namespace std;
 
int n, m;
vector<string> a(505), b(505);
bool sol() {
  for_in(i, n) {
    int sum_a = 0;
    int sum_b = 0;
    for_in(j, m) {
      sum_a += a[i][j] - '0';
      sum_b += b[i][j] - '0';
    }
    if (abs(sum_a - sum_b) % 3) return false;
  }
  for_in(i, m) {
    int sum_a = 0;
    int sum_b = 0;
    for_in(j, n) {
      sum_a += a[j][i] - '0';
      sum_b += b[j][i] - '0';
    }
    if (abs(sum_a - sum_b) % 3) return false;
  }
  return true;
}
int main() {
  fastio;
  int t;
  cin >> t;
  for_in(t) {
    cin >> n >> m;
    for_in(n) cin >> a[i];
    for_in(n) cin >> b[i];
    if (sol()) cout << "Yes
";
    else cout << "No
";
  }
}