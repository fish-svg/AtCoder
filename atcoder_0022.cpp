#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main() {
  int n;
  cin >> n;
  int stress = 0;
  
  int left_location = -1;
  int right_location = -1;
  
  for (int i=0; i<n; i++) {
    int a;
    char c;
    cin >> a >> c;
    if (c == 'L') {
      if (left_location == -1) {
        left_location = a;
      }
      else {
        stress += abs(a - left_location);
        left_location = a;
      }
    }
    else {
      if (right_location == -1) {
        right_location = a;
      }
      else {
        stress += abs(a - right_location);
        right_location = a;
      }
    }
  }
  
  cout << stress;
  return 0;
  
}
