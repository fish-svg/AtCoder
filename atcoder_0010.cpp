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
  int s, t;
  cin >> s >> t;
  vector<vector<int>>  g(v);
  
  for (int i=0; i<e; i++) {
    int a, b;
    cin >> a >> b;
    g[a].push_back({b});
  }
  
  vector<bool> seen(v, false);
  
  stack<int> st;
  st.emplace(s);
  seen[s] = true;
  
  while (st.size() != 0) {
    int state = st.top();
    st.pop();
    for (auto next : g[state]) {
      if (!seen[next]) {
        seen[next] = true;
        st.emplace(next);
      }
    }
  }
  
  if (seen[t]) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  
  return 0;
}