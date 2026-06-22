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
  int is_upper{}, is_lower{};
  for (auto c : s) {
    if (std::isupper(c)) {
      is_upper++;
    }
    if (std::islower(c)) {
      is_lower++;
    }
  }
 
  if (is_lower >= is_upper) {
    for (auto& c : s) {
      c = std::tolower(c);
    }
  } else {
    for (auto& c : s) {
      c = std::toupper(c);
    }
  }
  std::println("{}", s);
}