#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  int a,b,c,x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  
  for (int i=0; i<=a; i++) {
    for (int j=0; j<=b; j++) {
      for (int k=0; k<=c; k++) {
        if ((i*500 + j*100 + k*50) == x) {
          ans++;
        }
      }
    }
  }
  
  cout << ans << endl;
  
  return 0;
}
