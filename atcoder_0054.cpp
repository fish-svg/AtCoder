#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main() {
  string s;
  cin >> s;
  string t;
  cin >> t;
  vector<vector<int>> dp((int)(s.length()+1), vector<int>((int)(t.length()+1)));
  dp[0][0] = 0;
  
  for (int i=0; i<s.length(); i++) {
    for (int j=0; j<t.length(); j++) {
      if (s[i] == t[j]) {
        dp[i+1][j+1] = max({dp[i][j] + 1, dp[i+1][j], dp[i][j+1]});
      }
      else {
        dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
      }
    } 
  }
  
  cout << dp[s.length()][t.length()] << endl;
  
  return 0;
}
