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
  vector<int> a(n+1);
  vector<int> b(n+1);
  for (int i=2; i<=n; i++) cin >> a[i];
  for (int i=3; i<=n; i++) cin >> b[i];
  vector<int> dp(n+1);
  vector<int> ans;
  dp[1] = 0;
  dp[2] = a[2];
  for (int i=3; i<=n; i++) {
    dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
  }
  int pos = n;
  while (true) {
    ans.push_back(pos);
    if (pos == 1) break;
    if (dp[pos-1] + a[pos] == dp[pos]) pos--;
    else pos -= 2;
  }
  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i=0; i<ans.size(); i++) cout << ans[i] << " ";
  return 0;
}
