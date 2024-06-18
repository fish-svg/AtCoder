#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  for (int i=0; i<n; i++) {
    cin >> b[i];
  }
  
  int s = 0;
  
  for (int i=0; i<n; i++) {
    s += abs(b[i] - a[i]);
  }
  
  bool pari = false;
  
  if (k%2 == 0 && s%2 == 0) {
    pari = true;
  }
  if (k%2 == 1 && s%2 == 1) {
    pari = true;
  }
  
  if (s <= k && pari) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }
  
  return 0;
}