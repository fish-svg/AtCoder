#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main() {
  string s;
  cin >> s;
  int a = 0;
  int b = 0;
  int c = 0;
  for (int i=0; i<s.size(); i++) {
    if (s[i] == 'A') {
      a++;
    }
    else if (s[i] == 'B') {
      b++;
    }
    else if (s[i] == 'C') {
      c++;
    }
    else {
      continue;
    }
  }
  
  if (a == 1 and b == 1 and c == 1) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }
  
  return 0;
}
