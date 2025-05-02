#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> g[100010];
int dp[100010];
int a[100010];

void dfs (int pos) {
  for (int i=0; i<g[pos].size(); i++) {
    int to = g[pos][i];
    dfs(to);
    dp[pos] += (dp[to]+1);
  }
}

int main() {
  cin >> n;
  
  for (int i=2; i<=n; i++) {
    cin >> a[i];
    g[a[i]].push_back(i);
  }
  
  dfs(1);
  
  for (int i=1; i<=n; i++) {
    cout << dp[i] << " ";
  }
  return 0;
}
