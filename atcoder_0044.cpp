#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int n, m;
vector<vector<int>> g(100010);
bool visited[100010];

void dfs(int pos) {
  visited[pos] = true;
  for (int i=0; i<(int)g[pos].size(); i++) {
    int next = g[pos][i];
    if (visited[next] == false) dfs(next);
  }
  return;
}

int main(){
  cin >> n >> m;
  for (int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    a -= 1;
    b -= 1;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  for (int i=0; i<n; i++) visited[i] = false;
  dfs(0);
  
  string ans = "The graph is connected.";
  for (int i=0; i<n; i++) {
    if (visited[i] == false) ans = "The graph is not connected.";
  }
  cout << ans << endl;
  return 0;
}
