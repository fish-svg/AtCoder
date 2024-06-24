#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  int v, e;
  cin >> v >> e;
  vector<vector<int>> g(v);
  int s, t;
  cin >> s >> t;
  
  for (int i=0; i<e; i++) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
  }
  
  vector<bool> seen(v, false);
  
  queue<int> q;
  q.emplace(s);
  seen[s] = true;
  
  while (q.size() != 0) {
    int state = q.front();
    q.pop();
    for (auto next : g[state]) {
      if (!seen[next]) {
        seen[next] = true;
        q.emplace(next);
      }
    }
  }
  
  if (seen[t]) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }
  
  return 0;
}