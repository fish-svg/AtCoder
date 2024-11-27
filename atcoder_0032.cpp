#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int ans = 0;
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  for (int i=0; i<n; i++) {
    if (s[i] == 'O') {
      int c = 1;
      for (int j=i+1; j<i+k; j++) {
        if (s[j] == 'O') {
          c++;
        }
      }
      if (c == k) {
        ans++;
        for (int l=0; l<k; l++) {
          s.replace(i+l, 1, "X");
        }
      }
    } 
  }
  cout << ans;
  return 0;
}
