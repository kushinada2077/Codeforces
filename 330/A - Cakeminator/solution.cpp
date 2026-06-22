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
  int r, c;
  std::cin >> r >> c;
  std::vector<int> rr(r), cc(c);
  for (int i = 0; i < r; ++i) {
    std::string s;
    std::cin >> s;
    for (int j = 0; j < c; ++j) {
      if (s[j] == 'S') {
        rr[i] = 1;
        cc[j] = 1;
      }
    }
  }
 
  int empty_row = std::ranges::count(rr, 0);
  int empty_col = std::ranges::count(cc, 0);
  std::println("{}", empty_row * c + empty_col * r - empty_col * empty_row);
}