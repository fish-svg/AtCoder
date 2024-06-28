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
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  int alice = a[0];
  int bob = 0;
  for (int i=1; i<n; i++) {
    if (i%2 == 0) {
      alice += a[i];
    }
    else {
      bob += a[i];
    }
  }
  cout << alice - bob << endl;
  return 0;
}
