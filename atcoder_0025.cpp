#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  int count = 0;
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  bool judge = true;
  while (judge) {
    sort(a.rbegin(), a.rend());
    if (std::count_if(a.begin(), a.end(), [](int n){ return n > 0; }) > 1) {
      count++;
      a[0]--;
      a[1]--;
    }
    else {
      judge = false;
      cout << count << endl;
    }
  }
  return 0;
}
