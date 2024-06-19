#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  
  int h, w;
  cin >> h >> w;
  vector<int> H(h, 0);
  vector<int> W(w, 0);
  
  vector<vector<int>> a(h, vector<int>(w));
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      cin >> a[i][j];
    }
  }
  
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      H[i] += a[i][j];
    }
  }
  for (int i=0; i<w; i++) {
    for (int j=0; j<h; j++) {
      W[i] += a[j][i];
    }
  }
  
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      cout << H[i]+W[j] - a[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}