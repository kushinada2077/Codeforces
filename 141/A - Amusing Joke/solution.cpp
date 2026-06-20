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
  std::string s1, s2, s3;
  std::cin >> s1 >> s2 >> s3;
  std::vector<int> c1(26), c2(26);
  for (auto c : s1) {
    c1[c - 'A']++;
  }
  for (auto c : s2) {
    c1[c - 'A']++;
  }
  for (auto c : s3) {
    c2[c - 'A']++;
  }
 
  auto ok = [&] -> bool {
    for (int i = 0; i < 26; ++i) {
      if (c1[i] != c2[i]) {
        return false;
      }
    }
    return true;
  }();
 
  if (ok) {
    std::println("YES");
  } else {
    std::println("NO");
  }
}