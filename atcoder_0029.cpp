#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

int main(){
  char ab, ac, bc;
  int a, b, c;
  cin >> ab >> ac >> bc;
  if (ab == '<') {
    if (ac == '>') {
      cout << "A" << endl;
    }
    else {
      if (bc == '<') {
        cout << "B" << endl;
      }
      else {
        cout << "C" << endl;
      }
    }
  }
  else {
    if (ac == '<') {
      cout << "A" << endl;
    }
    else {
      if (bc == '>') {
        cout << "B" << endl;
      }
      else {
        cout << "C" << endl;
      }
    }
  }
  return 0;
}
