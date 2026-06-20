#include <bits/stdc++.h>
using i64 = long long;
 
void solve() {
  int n;
  std::cin >> n;
  std::vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    std::cin >> b[i];
  }
  int i = 0;
  while (i < n && a[i] >= b[i]) {
    i++;
  }
 
  if (i == n) {
    std::cout << "YES
";
    return;
  }
 
  for (int j = 0; j < n; ++j) {
    if (j != i && b[i] - a[i] > a[j] - b[j]) {
      std::cout << "NO
";
      return;
    }
  }
 
  std::cout << "YES
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