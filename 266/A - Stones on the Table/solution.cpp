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
  int n;
  std::string s;
  std::cin >> n >> s;
  int ans = 0;
  for (int i = 0; i < n - 1; ++i) {
    if (s[i] == s[i + 1]) {
      ans++;
    }
  }
  std::println("{}", ans);
}