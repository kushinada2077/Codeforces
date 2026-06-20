#include <bits/stdc++.h>
using i64 = long long;
 
void solve() {
  int n;
  std::cin >> n;
  std::vector a(n, std::vector<int>(n));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cin >> a[i][j];
    }
  }
 
  std::vector<int> suf(n);
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j >= 0; --j) {
      if (a[i][j] != 1) break;
      suf[i]++;
    }
  }
 
  std::multiset<int> s;
  for (int i = 0; i < n; ++i) {
    s.insert(suf[i]);
  }
 
  int ans = 1;
  while (!s.empty()) {
    int cur = *s.begin();
    if (cur >= ans) {
      ans++;
    }
    s.extract(cur);
  }
 
  std::cout << std::min(ans, n) << "
";
}
 
int main() {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}