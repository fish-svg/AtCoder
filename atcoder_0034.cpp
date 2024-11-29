#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  string s;
  cin >> s;
  for (int i=0; i<(int)s.size(); i++) {
    if (s[i] == '|') {
      bool judge = true;
      int ans = 0;
      int j = i+1;
      while (judge) {
        if (j >= (int)s.size()) {
          return 0;
        }
        else if (s[j] == '-') {
          j++;
          ans++;
        }
        else if (s[j] == '|') {
          cout << ans << " ";
          judge = false;
        }
      }
    }
  }
  return 0;
}
