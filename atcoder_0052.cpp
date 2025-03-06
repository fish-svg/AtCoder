#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main() {
  int n;
  cin >> n;
  int target;
  cin >> target;
  vector<int> a(n+1);
  for (int i=1; i<=n; i++) cin >> a[i];
  vector<vector<bool>> dp(n+1, vector<bool>(target+1));
  dp[0][0] = true;
  for (int i=1; i<=target; i++) dp[0][i] = false;
  for (int i=1; i<=n; i++) {
    for (int s=0; s<=target; s++) {
      if (a[i] <= s) {
        if (dp[i - 1][s] == true or dp[i - 1][s - a[i]] == true) dp[i][s] = true;
        else dp[i][s] = false;
      }
      else {
        if (dp[i - 1][s]) dp[i][s] = true;
        else dp[i][s] = false;
      }
    }
  }
  if (dp[n][target]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
