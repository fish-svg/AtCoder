#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <tuple>
#include <bitset>
#include <bits/stdc++.h>
long long INF = 1LL << 60;

struct Edge {
    int to;
};
using Graph = vector<vector<Edge>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;
    for (auto e : G[v]) {
        if (!seen[e.to]) {
            dfs(G, e.to);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    Graph G(n);
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back({b});
        G[b].push_back({a});
    }

    seen.assign(n, false);
    int cnt = 0;

    for (int i=0; i<n; i++) {
        if (!seen[i]) {
            dfs(G, i);
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}