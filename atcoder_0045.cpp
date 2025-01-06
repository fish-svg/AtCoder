#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int n;
  cin >> n;
  int a[100010];
  int b[100010];
  for (int i=1; i<n; i++) cin >> a[i];
  for (int i=2; i<n; i++) cin >> b[i];
  int dp[100010];
  dp[0] = 0;
  dp[1] = a[1];
  for (int i=2; i<n; i++) dp[i] = min(dp[i-2] + b[i], dp[i-1] + a[i]);
  cout << dp[n-1] << endl;
  return 0;
}
