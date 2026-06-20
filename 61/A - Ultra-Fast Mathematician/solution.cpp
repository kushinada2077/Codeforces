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
  std::string a, b;
  std::cin >> a >> b;
  int n = a.size();
  std::vector<char> ans(n);
  for (int i = 0; i < n; ++i) {
    ans[i] = (a[i] - '0') ^ (b[i] - '0') + '0';
  }
 
  std::println("{}", std::string(ans.begin(), ans.end()));
}