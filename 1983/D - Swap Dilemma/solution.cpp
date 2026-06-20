#include <algorithm>
#include <iostream>
#include <numeric>
#include <queue>
#include <vector>
#define ll long long
#define fastio cin.tie(0)->sync_with_stdio(0);
#define for_in(n) for (int i = 0; i < n; ++i)
#define si(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define pb(...) push_back(__VA_ARGS__)
using namespace std;
 
ll merge(vector<int>& a, int st, int en) {
  int mid = (st + en) / 2, l = st, r = mid;
  ll ret = 0;
  vector<int> t;
  for (int i = st; i < en; ++i) {
    if (l == mid) t.pb(a[r++]);
    else if (r == en) t.pb(a[l++]);
    else if (a[l] <= a[r]) t.pb(a[l++]);
    else {
      t.pb(a[r++]);
      ret += mid - l;
    }
  }
  for (int i = st; i < en; ++i) a[i] = t[i - st];
  return ret;
}
ll merge_sort(vector<int>& a, int st, int en) {
  if (st + 1 == en) return 0;
  int mid = (st + en) / 2;
  ll ret = 0;
  ret += merge_sort(a, st, mid);
  ret += merge_sort(a, mid, en);
  ret += merge(a, st, en);
  return ret;
}
int main() {
  fastio;
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    bool f = false;
    vector<int> a(n), b(n);
    for (auto& i : a) cin >> i;
    for (auto& i : b) cin >> i;
    ll na = merge_sort(a, 0, n), nb = merge_sort(b, 0, n);
    for (int i = 0; i < n; ++i) {
      if (a[i] != b[i]) {
        f = true;
        break;
      }
    }
    if (abs(na - nb) & 1) f = true;
    if (f) cout << "NO
";
    else cout << "YES
";
  }
}