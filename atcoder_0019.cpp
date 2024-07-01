#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  vector<char> s(3);
  int a, b;
  
  for (int i=0; i<3; i++) {
    cin >> s[i];
    if (s[i] == 'R') {
      a = i;
    }
    else if (s[i] == 'M') {
      b = i;
    }
  }
  
  if (a < b) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  
  return 0;
}
