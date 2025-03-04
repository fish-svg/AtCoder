#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
#include <atcoder/dsu>

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> a_copy(n);
  for (int i=0; i<n; i++) cin >> a[i];
  copy(a.begin(), a.end(), a_copy.begin());
  sort(a_copy.begin(), a_copy.end());
  map<int, int> ans;
  int subtract = 0;
  for (int i=0; i<n; i++) {
    if (!ans[a_copy[i]]) {
      ans[a_copy[i]] = i+1 - subtract;
    }
    else {
      subtract++;
      ans[a_copy[i]] = min(i+1, ans[a_copy[i]]);
    }
  }
  for (int i=0; i<n; i++) cout << ans[a[i]] << " ";
  return 0;
}
