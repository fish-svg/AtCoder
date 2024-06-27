#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int n;
  cin >> n;
  int a[n];
  int ans = 0;
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  while (true) {
    int count = 0;
    for (int i=0; i<n; i++) {
      if (a[i]%2 == 0) {
        count++;
      }
    }
    if (count == n) {
      ans++;
      for (int i=0; i<n; i++) {
        a[i] /= 2;
      }
    }
    else {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}