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
  cout << s[1] << s[2] << s[0] << " ";
  cout << s[2] << s[0] << s[1] << endl;
  return 0;
}
