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
  std::vector<std::string> b(r);
  std::vector<int> rr(r), cc(c);
  for (int i = 0; i < r; ++i) {
    std::cin >> b[i];
    for (int j = 0; j < c; ++j) {
      if (b[i][j] == 'S') {
        rr[i] = 1;
        cc[j] = 1;
      }
    }
  }
 
  for (int i = 0; i < r; ++i) {
    if (!rr[i]) {
      for (int j = 0; j < c; ++j) {
        b[i][j] = 'e';
      }
    }
  }
 
  for (int j = 0; j < c; ++j) {
    if (!cc[j]) {
      for (int i = 0; i < r; ++i) {
        b[i][j] = 'e';
      }
    }
  }
 
  int ans = 0;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      if (b[i][j] == 'e') {
        ans++;
      }
    }
  }
  std::println("{}", ans);
}