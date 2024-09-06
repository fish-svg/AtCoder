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
  int k;
  cin >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  for (int i=0; i<k; i++) {
    cout << a[n-k+i] << " ";
  }
  for (int i=0; i<n-k; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
