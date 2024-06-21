#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  
  int n,q;
  cin >> n;
  vector<int> c(n);
  vector<int> p(n);
  vector<int> r1(n+1);
  vector<int> r2(n+1);
  
  for (int i=0; i<n; i++) {
    cin >> c[i] >> p[i];
    r1[i+1] = r1[i];
    r2[i+1] = r2[i];
    if (c[i] == 1) {
      r1[i+1] += p[i];
    }
    else {
      r2[i+1] += p[i];
    }
  }
  
  cin >> q;
  vector<int> l(q);
  vector<int> r(q);
  
  for (int i=0; i<q; i++) {
    cin >> l[i] >> r[i];
  }
  
  for (int i=0; i<q; i++){
    int ans1 = r1[r[i]] - r1[l[i]-1];
    int ans2 = r2[r[i]] - r2[l[i]-1];
    cout<<ans1<<" "<<ans2<<endl;
  }
  
  return 0;
}