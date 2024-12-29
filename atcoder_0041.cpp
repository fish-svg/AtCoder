#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  int i = 0;
  while (i<(int)s.size()) {
    if (s[i] == '0') {
      if (s[i+1] == '0') {
        ans++;
        i = i+2;
      }
      else {
        ans++;
        i++;
      }
    }
    else {
      ans++;
      i++;
    }
  }
  cout << ans << endl;
  return 0;
}
