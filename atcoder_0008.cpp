#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main() {
  // 足場の数
  int n;
  cin >> n;
  
  // 足場の高さ
  vector<long long> h(n);
  for (int i=0; i<n; i++) cin >> h[i];
  
  // DPテーブル
  vector<long long> dp(n, INF);
  // 初期条件
  dp[0] = 0;
  
  // 処理
  for (int i=1; i<n; i++) {
    dp[i] = min(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
    if (i >= 2) {
      dp[i] = min(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
    }
  }
  
  // 答え
  cout << dp[n-1];
  return 0;
}