#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  int h, w;
  cin >> h >> w;
  // 例外のケース　高さまたは幅が1の時はすべて#
  if (h == 1 or w == 1) {
    cout << h*w << endl;
  }
  // 偶数のインデックスの時に#
  else {
    cout << ((h+1)/2) * ((w+1)/2) << endl;
  }
  return 0;
}