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
  int n, k, l, c, d, p, nl, np;
  std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
  int tot = std::min({k * l / nl, c * d, p / np});
  std::println("{}", tot / n);
}