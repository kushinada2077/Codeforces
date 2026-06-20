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
  std::string n;
  std::cin >> n;
  int m = n.size();
  int k = 0;
 
  for (int i = 0; i < m; ++i) {
    if (n[i] == '4' || n[i] == '7') {
      k++;
    }
  }
 
  auto lucky = [&] {
    if (k == 0) {
      return false;
    }
    while (k > 0) {
      if (k % 10 != 4 && k % 10 != 7) {
        return false;
      }
      k /= 10;
    }
    return true;
  }();
 
  if (lucky) {
    std::println("YES");
  } else {
    std::println("NO");
  }
}