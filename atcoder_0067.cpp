#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  // （行先，コスト）をまとめた配列
  vector<pair<int, int>> g[100009];
  // 現在までわかっている最短距離
  int cur[100009];
  // 決定しているかどうか
  bool comfirmed[100009];
  // 小さい順　（最短距離，行先）
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  for (int i=1; i<=m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    g[a].push_back(make_pair(b, c));
    g[b].push_back(make_pair(a, c));
  }
  for (int i=1; i<=n; i++) cur[i] = 2000000000;
  for (int i=1; i<=n; i++) comfirmed[i] = false;
  
  // スタート
  cur[1] = 0;
  pq.push(make_pair(cur[1], 1));
  
  while (!pq.empty()) {
    int pos = pq.top().second;
    pq.pop();
    if (comfirmed[pos] == true) continue;
    comfirmed[pos] = true;
    for (int i=0; i<g[pos].size(); i++) {
      int next = g[pos][i].first;
      int cost = g[pos][i].second;
      if (cur[next] > cur[pos] + cost) {
        cur[next] = cur[pos] + cost;
        pq.push(make_pair(cur[next], next));
      }
    }
  }
  for (int i=1; i<=n; i++) {
    if (cur[i] == 2000000000) cout << -1 << endl;
    else cout << cur[i] << endl;
  }
  return 0;
}
