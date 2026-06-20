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
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  int max_idx = 0, min_idx = 0;
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
    if (a[max_idx] < a[i]) {
      max_idx = i;
    }
    if (a[min_idx] >= a[i]) {
      min_idx = i;
    }
  }
 
  int ans = max_idx + (n - 1 - min_idx);
  if (min_idx < max_idx) {
    ans--;
  }
 
  std::println("{}", ans);
}