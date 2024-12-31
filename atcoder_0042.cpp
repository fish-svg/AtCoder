#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  for (int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    a -= 1;
    b -= 1;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  for (int i=0; i<n; i++) {
    cout << i+1 << ":" << " " << "{";
    for (int j=0; j<(int)g[i].size(); j++) {
      if (j != (int)g[i].size()-1) {
        cout << g[i][j]+1 << ", ";
      }
      else {
        cout << g[i][j]+1;
      }
    }
    cout << "}" << endl;
  }
  return 0;
}
