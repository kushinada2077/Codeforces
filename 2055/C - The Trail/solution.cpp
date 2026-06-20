#include <bits/stdc++.h>
using i64 = long long;
 
int main() {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  int tc;
  std::cin >> tc;
 
  while (tc--) {
    int n, m;
    std::string s;
    std::cin >> n >> m >> s;
    std::vector a(n, std::vector<i64>(m));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        std::cin >> a[i][j];
      }
    }
 
    int i = 0, j = 0;
    while (i + j < n + m - 1) {
      i64 res = 0;
      if (i + j == n + m - 2 || s[i + j] == 'D') {
        for (int x = 0; x < m; ++x) {
          res -= a[i][x];
        }
        a[i][j] = res;
        i++;
      } else {
        for (int x = 0; x < n; ++x) {
          res -= a[x][j];
        }
        a[i][j] = res;
        j++;
      }
    }
 
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        std::cout << a[i][j] << " 
"[j == m - 1];
      }
    }
  }
}