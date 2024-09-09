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
  vector<long long> h(n);
  long long count = 0;
  for (int i=0; i<n; i++) {
    cin >> h[i];
  }
  for (int i=0; i<n; i++) {
    long long num = h[i] / 5;
    count += num * 3;
    h[i] -= num * 5;
    while (h[i] > 0) {
      count++;
      if (count % 3 == 0) {
        h[i] -= 3;
      }
      else {
        h[i] -= 1;
      }
    }
  }
  cout << count << endl;
  return 0;
}
