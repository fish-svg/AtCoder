#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  // 1 の塊のカウント
  int count = 0;
  // 塊を格納する
  vector<string> ans(n);
  // ans の添え字
  int id = 0;
  // ans に格納する塊の始まりの添え字
  int start = 0;
  for (int i=0; i<n; i++) {
    if (s[i] != s[i+1]) {
      ans[id] = s.substr(start, i - start + 1);
      id++;
      start = i + 1;
      if (s[i] == '1') {
        count++;
        if (count == k) {
          // 既にid を増やしているので-2, -1
          swap(ans[id-2], ans[id-1]);
        }
      }
    }
  }
  for (int i=0; i<(int)ans.size(); i++) {
    cout << ans[i];
  }
  return 0;
}
