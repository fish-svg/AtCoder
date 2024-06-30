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
  vector<int> d(n);
  for (int i=0; i<n; i++) {
    cin >> d[i];
  }
  sort(d.rbegin(), d.rend());
  int ans = 1;
  int moti = d[0];
  for (int i=1; i<n; i++) {
    if (moti > d[i]) {
      ans++;
      moti = d[i];
    }
  }
  cout << ans << endl;
  return 0;
}
