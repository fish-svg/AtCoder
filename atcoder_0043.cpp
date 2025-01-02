#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int h, w, d;
  cin >> h >> w >> d;
  vector<string> s(h);
  for (int i=0; i<h; i++) cin >> s[i];
  int ans = 0;
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (s[i][j] == '#') continue;
      else {
        for (int i2=0; i2<h; i2++) {
          for (int j2=0; j2<w; j2++) {
            if (s[i2][j2] == '#' or (i == i2 and j == j2)) continue;
            int tmp = 0;
            for (int i3=0; i3<h; i3++) {
              for (int j3=0; j3<w; j3++) {
                if (s[i3][j3] == '.' and ((abs(i3-i)+abs(j3-j)<=d) or (abs(i3-i2)+abs(j3-j2)<=d))) tmp++;
              }
            }
            ans = max(ans, tmp);
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
