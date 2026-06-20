#include <bits/stdc++.h>
using i64 = long long;
 
void solve() {
  int n;
  std::cin >> n;
  std::vector<int> c(n);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      char a;
      std::cin >> a;
      if (i >= j) continue;
      if (a == '1') {
        c[i]++;
      } else if (a == '0') {
        c[j]++;
      }
    }
  }
 
  std::vector<int> ans(n);
  std::iota(ans.begin(), ans.end(), 0);
  sort(ans.begin(), ans.end(), [&](int a, int b) { return c[a] > c[b]; });
  for (int i = 0; i < n; ++i) {
    std::cout << ans[i] + 1 << " 
"[i == n - 1];
  }
}
int main() {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}