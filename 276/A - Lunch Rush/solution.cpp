#include <bits/stdc++.h>
 
#ifndef ONLINE_JUDGE
#define kushinada freopen(getenv("MY_PATH"), "r", stdin);
#else
#define kushinada
#endif
 
using i64 = long long;
using P = std::pair<int, int>;
using TP = std::tuple<int, int, int>;
 
int main() {
  std::cin.tie(NULL)->sync_with_stdio(false);
  kushinada;
  int n, k;
  std::cin >> n >> k;
  int ans = -0x3f3f3f3f;
 
  for (int i = 0; i < n; ++i) {
    int f, t;
    std::cin >> f >> t;
    if (t > k) {
      ans = std::max(ans, f - t + k);
    } else {
      ans = std::max(ans, f);
    }
  }
  std::println("{}", ans);
}