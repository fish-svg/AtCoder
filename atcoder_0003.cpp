#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  
  int n, a;
  cin >> n >> a;
  vector<int> t(n);
  
  for (int i=0; i<n; i++) {
    cin >> t[i];
  }
  
  cout << t[0] + a << endl;
  int base = t[0] + a;
  for (int i=1; i<n; i++) {
    if (t[i] < base) {
      cout << base + a << endl;
      base += a;
    }
    else {
      cout << t[i] + a << endl;
      base = t[i] + a;
    }
  }
  return 0;
}
