#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> dp(3, vector<int>(n+1, 0));
  vector<int> a(n+1), b(n+1), c(n+1);
  for (int i=1; i<=n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }
  for (int i=1; i<=n; i++) {
    // a を選んだ
    dp[0][i] = max(dp[1][i-1]+a[i], dp[2][i-1]+a[i]);
    // b を選んだ
    dp[1][i] = max(dp[0][i-1]+b[i], dp[2][i-1]+b[i]);
    // c を選んだ
    dp[2][i] = max(dp[0][i-1]+c[i], dp[1][i-1]+c[i]);
  }
  cout << max(dp[0][n], max(dp[1][n], dp[2][n]));
  return 0;
}
