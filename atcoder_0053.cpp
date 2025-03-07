#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long weight;
  cin >> weight;
  vector<long long> w(n+1);
  vector<long long> v(n+1);
  for (int i=0; i<n; i++) cin >> w[i] >> v[i];
  long long dp[n+1][weight+1];
  for (int i=0; i<=weight; i++) dp[0][i] = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<=weight; j++) {
      if (j >= w[i]) dp[i+1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
      else dp[i+1][j] = dp[i][j];
    }
  }
  cout << dp[n][weight] << endl;
  return 0;
}
