#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  for (int i=0; i<m; i++) {
    cin >> b[i];
  }
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      if (b[i] >= a[j]) {
        cout << j + 1 << endl;
        break;
      }
      if (j == n-1) {
        cout << -1 << endl;
      }
    }
  }
  return 0;
}
