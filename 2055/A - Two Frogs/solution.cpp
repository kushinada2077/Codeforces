#include <bits/stdc++.h>
using i64 = long long;
 
int main() {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  int tc;
  std::cin >> tc;
 
  while (tc--) {
    int n, a, b;
    std::cin >> n >> a >> b;
    if (abs(a - b) % 2) {
      std::cout << "NO
";
    } else {
      std::cout << "YES
";
    }
  }
}