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
  std::vector<int> a(n);
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
    if (a[i] + k <= 5) {
      ans++;
    }
  }
 
  std::println("{}", ans / 3);
}