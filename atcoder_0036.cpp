#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int n, d;
  cin >> n >> d;
  string s;
  cin >> s;
  int ans = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == '.') {
      ans++;
    }
  }
  ans += d;
  cout << ans;
  return 0;
}
