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
  vector<int> t(n);
  vector<int> v(n);
  for (int i=0; i<n; i++) {
    cin >> t[i];
    cin >> v[i];
  }
  int ans = v[0];
  for (int i=1; i<n; i++) {
    int subtraction = t[i] - t[i-1];
    if (subtraction > ans) {
      ans = 0;
    }
    else {
      ans -= subtraction;
    }
    ans += v[i];
  }
  cout << ans;
  return 0;
}
