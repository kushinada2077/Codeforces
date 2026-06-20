#include <bits/stdc++.h>
using i64 = long long;
 
void solve() {
  int n;
  std::cin >> n;
  std::vector<int> a(n), b(n);
  std::set<int> aa, bb;
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
    aa.insert(a[i]);
  }
  for (int i = 0; i < n; ++i) {
    std::cin >> b[i];
    bb.insert(b[i]);
  }
 
  if (aa.size() + bb.size() > 3) {
    std::cout << "YES
";
  } else {
    std::cout << "NO
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