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
  int y;
  std::cin >> y;
  while (true) {
    y++;
    std::vector<int> d;
    for (int x = y; x > 0; x /= 10) {
      d.push_back(x % 10);
    }
 
    std::ranges::sort(d);
    if (std::ranges::unique(d).size() == 0) {
      std::println("{}", y);
      return 0;
    }
  }
}