#include <bits/stdc++.h>
using i64 = long long;
 
void solve() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
 
  if (n == k) {
    for (int i = 1; i < n; i += 2) {
      if (a[i] != (i + 1) / 2) {
        std::cout << (i + 1) / 2 << "
";
        return;
      }
    }
    std::cout << n / 2 + 1 << "
";
  } else {
    for (int i = 1; i < n - k + 2; ++i) {
      if (a[i] != 1) {
        std::cout << "1
";
        return;
      }
    }
    std::cout << "2
";
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