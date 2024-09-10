#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  int l, r;
  cin >> l >> r;
  if (l == 1 and r == 0) {
    cout << "Yes" << endl;
  }
  else if (l == 0 and r == 1) {
    cout << "No" << endl;
  }
  else {
    cout << "Invalid" << endl;
  }
  return 0;
}
