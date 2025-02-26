#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;
#include <atcoder/dsu>

int main() {
  int n; cin >> n;
  
  vector<int> a(n);
  for (int i=1; i<=n; i++) cin >> a[i];
  
  int d; cin >> d;
  vector<int> l(d), r(d);
  for (int i=1; i<=d; i++) cin >> l[i] >> r[i];
  
  vector<int> p(n), q(n);
  p[1] = a[1];
  for (int i=2; i<=n; i++) p[i] = max(p[i-1], a[i]);
  q[n] = a[n];
  for (int i=n-1; i>=1; i--) q[i] = max(q[i+1], a[i]);
  
  for (int i=1; i<=d; i++) {
    cout << max(p[ l[i]-1 ], q[ r[i]+1 ]) << endl;
  }
  
  return 0;
}
