#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<char>> s(n, vector<char>(m));
  vector<bool> c(m, false);
  int ans = 10;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> s[i][j];
    }
  }
  
  for (int bits=0; bits<(1<<n); bits++) {
    int count = 0;
    fill(c.begin(), c.end(), false);
    for (int i=0; i<n; i++) {
      int mask = 1<< i;
      if (bits & mask) {
        for (int j=0; j<m; j++) {
          if (s[i][j] == 'o') {
            c[j] = true;
          }
        }
        count++;
      }
    }
    if (all_of(c.begin(), c.end(), [](bool v) {return v;})) {
      ans = min(ans, count);
    }
  }
  
  cout << ans << endl;
  
  return 0;
}
