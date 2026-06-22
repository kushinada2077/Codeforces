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
  int n, t;
  std::cin >> n >> t;
  std::string s;
  std::cin >> s;
 
  auto next = [&]() {
    for (int i = 0; i < n; ++i) {
      if (i + 1 < n && s[i] == 'B' && s[i + 1] == 'G') {
        std::swap(s[i], s[i + 1]);
        i++;
      }
    }
  };
 
  for (int i = 0; i < t; ++i) {
    next();
  }
  std::println("{}", s);
}