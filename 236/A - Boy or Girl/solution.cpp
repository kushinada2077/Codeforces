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
  int n = s.size();
  std::vector<int> chk(26);
  int cnt = 0;
  for (auto c : s) {
    if (chk[c - 'a'] == 0) {
      chk[c - 'a'] = 1;
      cnt++;
    }
  }
 
  if (cnt % 2) {
    std::println("IGNORE HIM!");
  } else {
    std::println("CHAT WITH HER!");
  }
}