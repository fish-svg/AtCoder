#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main() {
  vector<int> a(4);
  for (int i=0; i<4; i++) cin >> a[i];
  int x = a[0];
  int y;
  int count_x = 1;
  int count_y = 0;
  for (int i=1; i<4; i++) {
    if (a[i] != x) {
      y = a[i];
      break;
    }
  }
  for (int i=1; i<4; i++) {
    if (a[i] == x) count_x++;
    else if (a[i] == y) count_y++;
  }
  if (count_x==2 and count_y==2) cout << "Yes";
  else if (count_x==3 and count_y==1) cout << "Yes";
  else if (count_x==1 and count_y==3) cout << "Yes";
  else cout << "No";
  return 0;
}
