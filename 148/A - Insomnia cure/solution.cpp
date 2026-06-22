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
  int k, l, m, n, d;
  std::cin >> k >> l >> m >> n >> d;
  std::vector<int> cnt(d + 1);
  for (int i = k; i <= d; i += k) {
    cnt[i] = 1;
  }
  for (int i = l; i <= d; i += l) {
    cnt[i] = 1;
  }
  for (int i = m; i <= d; i += m) {
    cnt[i] = 1;
  }
  for (int i = n; i <= d; i += n) {
    cnt[i] = 1;
  }
  std::println("{}", std::ranges::count(cnt, 1));
}