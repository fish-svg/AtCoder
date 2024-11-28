#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
const long long INF = 1LL << 60;

int main(){
  string s;
  cin >> s;
  int a=0;
  int b=0;
  int c=0;
  for (int i=0; i<6; i++) {
    if (s[i] == '1') {
      a++;
    }
    else if (s[i] == '2') {
      b++;
    }
    else if (s[i] == '3') {
      c++;
    }
  }
  if (a == 1 and b == 2 and c == 3) {
    cout << "Yes" << endl;
    return 0;
  }
  else {
    cout << "No" << endl;
    return 0;
  }
}
