#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
      --a[i];
    }
    for (int i = 0; i < n; ++i) {
      a[a[i] % n] += n;
    }
    for (int i = 0; i < n; ++i) {
      cout << a[i] / n << ' ';
    }
    cout << '\n';
  }
  return 0;
}
