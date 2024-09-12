#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  int n;
  cin >> n;
  vector<vector<int>> genso(n, vector<int>(n));
  int k = 1;
  for (int i=0; i<n; i++) {
    for (int j=0; j<k; j++) {
      cin >> genso[i][j];
    }
    k++;
  }
  int g = 1;
  for (int i=1; i<=n; i++) {
    if (g >= i) {
      g = genso[g-1][i-1];
    }
    else {
      g = genso[i-1][g-1];
    }
  }
  cout << g << endl;
  return 0;
}
