#include <bits/stdc++.h>
using namespace std;

int complete_time(vector<vector<int>> &children, int x) {
  if (children[x].size() == 0) return 0;
  int max_time = 0;
  for (int child : children[x]) {
    int middle_time = complete_time(children, child) + 1;
    max_time = max(max_time, middle_time);
  }
  return max_time;
}
 
int main() {
  int n;
  cin >> n;
  vector<int> parent(n);  
  parent[0] = -1; 
  for (int i=1; i<n; i++) {
    cin >> parent[i];
  }
  vector<vector<int>> children(n);
  for (int i=1; i<n; i++) {
    int parent_index = parent[i];
    children[parent_index].push_back(i);
  }
  
  cout << complete_time(children, 0) << endl;
}
