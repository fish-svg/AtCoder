#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;
#include <atcoder/dsu>

long long n, k;
long long a[100010];
long long b[100010];
long long ans = 0;

int main() {
  
  cin >> n;
  cin >> k;
  for (long long i=1; i<=n; i++) cin >> a[i];
  
  for (long long i=1; i<n; i++) {
    
    if (b[i] == 1) b[i] = 1;
    else b[i] = b[i-1];
    
    while (b[i]<n && a[b[i]+1] - a[i] <= k) {
      b[i]++;
    }
  }
  
  for (long long i=1; i<n; i++) ans += (b[i] - i);
  
  cout << ans;
  
  return 0;
}
