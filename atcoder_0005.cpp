#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;
#include <unordered_set>

int main() {
  int n;
  cin >> n;
    
  unordered_set<string> user;
    
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
        
    if (user.find(s) == user.end()) {
      user.insert(s);
      cout << i + 1 << endl;
    }
  }
    
  return 0;
}