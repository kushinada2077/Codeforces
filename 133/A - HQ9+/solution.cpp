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
 
  std::string s;
  std::cin >> s;
  for (auto c : s) {
    if (c == 'H' || c == 'Q' || c == '9') {
      std::println("YES");
      return 0;
    }
  }
 
  std::println("NO");
  return 0;
}