#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
#include <atcoder/dsu>

int n, k;
vector<int> a(1001);
vector<int> b(1001);
vector<int> c(1001);
vector<int> d(1001);
vector<int> p(1000010);
vector<int> q(1000010);

int main() {
  
  cin >> n;
  cin >> k;
  for (int i=1; i<=n; i++) cin >> a[i];
  for (int i=1; i<=n; i++) cin >> b[i];
  for (int i=1; i<=n; i++) cin >> c[i];
  for (int i=1; i<=n; i++) cin >> d[i];
  
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      p[(i-1) * n + j] = a[i] + b[j];
    }
  }
  
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      q[(i-1) * n + j] = c[i] + d[j];
    }
  }
  
  sort(q.begin(), q.end());
  
  for (int i=1; i<=n*n; i++) {
    if (binary_search(q.begin(), q.end(), k - p[i])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  return 0;
}
