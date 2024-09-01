#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int a, b;
  cin >> a >> b;
  if (a == b) {
    cout << 1;
    return 0;
  }
  else {
    int dis = a - b;
    if (dis%2 == 0) {
      cout << 3;
      return 0;
    }
    else {
      cout << 2;
      return 0;
    }
  }
}
