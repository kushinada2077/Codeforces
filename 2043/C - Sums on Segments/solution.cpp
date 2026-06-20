#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
const int INF = 0x3f3f3f3f;
int tc, n, A[200005];
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> tc;
  while (tc--) {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> A[i];
    int mn = 0, mx = 0, sum = 0, l1 = 0, r1 = 0, l2 = INT_MAX, r2 = -INF, mn2 = INF, mx2 = -INF;
    for (int i = 0; i < n; ++i) {
      sum += A[i];
      if (abs(A[i]) != 1) {
        mn2 = mn;
        mx2 = mx;
        mx = mn = sum;
      }
      l1 = min(l1, sum - mx);
      r1 = max(r1, sum - mn);
      l2 = min(l2, sum - mx2);
      r2 = max(r2, sum - mn2);
      mn = min(mn, sum);
      mx = max(mx, sum);
    }
 
    vector<int> tmp;
    if (r1 < l2) {
      for (int i = l1; i <= r1; ++i) tmp.push_back(i);
      for (int i = l2; i <= r2; ++i) tmp.push_back(i);
    } else if (r2 < l1) {
      for (int i = l2; i <= r2; ++i) tmp.push_back(i);
      for (int i = l1; i <= r1; ++i) tmp.push_back(i);
    } else {
      int l = min(l1, l2), r = max(r1, r2);
      for (int i = l; i <= r; ++i) tmp.push_back(i);
    }
    cout << tmp.size() << "
";
    for (auto i : tmp) cout << i << " ";
    cout << "
";
  }
}