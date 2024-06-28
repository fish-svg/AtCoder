#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int digit_sum(int n){
  int sum = 0;
  while(n){
  sum += n%10;
  n /= 10; 
  }
  return sum;
}

int main(){
  int a,b,n;
  cin >> n >> a >> b;
  int ans = 0;
  
  for (int i=1; i<=n; i++) {
    int x = digit_sum(i);
    if (x >= a and x <= b) {
      ans += i;
    }
  }
  
  cout << ans << endl;
  
  return 0;
}
