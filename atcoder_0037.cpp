#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  
  int n, d;
  cin >> n >> d;
  string s;
  cin >> s;
  int count = 0;
  
  for (int i=n-1; i>=0; i--) {
    if (s[i] == '@') {
      s[i] = '.';
      count++;
    }
    if (count == d) {
      cout << s;
      return 0;
    }
  }
}
