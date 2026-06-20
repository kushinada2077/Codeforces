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
  std::vector<int> ans(k), chk(n * k);
  for (int i = 0; i < k; ++i) {
    int x;
    std::cin >> x;
    chk[x - 1] = 1;
    ans[i] = x - 1;
  }
 
  std::vector<int> b;
  for (int i = 0; i < n * k; ++i) {
    if (!chk[i]) {
      b.push_back(i);
    }
  }
 
  int nn = 0;
 
  for (int i = 0; i < k; ++i) {
    for (int j = 0; j < n - 1; ++j) {
      std::print("{} ", b[nn++] + 1);
    }
    std::println("{}", ans[i] + 1);
  }
}