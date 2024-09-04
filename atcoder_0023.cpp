#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main() {
  string s;
  cin >> s;
  string ans;
  int count = 1;
  for (int i=1; i<int(s.size()); i++) {
    if (i == int(s.size())-1) {
      if (s[i] != s[i-1]) {
        ans += s[i-1] + to_string(count);
        ans += s[i] + to_string(1);
      }
      else {
        count++;
        ans += s[i] + to_string(count);
      }
    }
    else if (s[i] == s[i-1]) {
      count++;
    }
    else {
      ans += s[i-1] + to_string(count);
      count = 1;
    }
  }
  cout << ans << endl;
  return 0;
}
