#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  
  int n, p, q;
  cin >> n >> p >> q;
  
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  
  int ans = 0;
  
  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
      for (int k=j+1; k<n;k++) {
        for (int l=k+1; l<n; l++) {
          for (int m=l+1; m<n; m++) {
            
            // prevent from over flow
            long long x = 1;
            x = (x * a[i]) % p;
            x = (x * a[j]) % p;
            x = (x * a[k]) % p;
            x = (x * a[l]) % p;
            x = (x * a[m]) % p;
            if (x % p == q) {
              ans++;
            }
          }
        }
      }
    }
  }
  
  cout << ans << endl;
  
  return 0;
}