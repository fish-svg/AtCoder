#include <bits/stdc++.h>
const long long INF = 1LL << 60;

using namespace std;

// 参照渡しで変更が反映される
bool BF(long long &a, long long b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    long long n, m;
    cin >> n >> m;
    using edge = pair<long long, long long>;
    vector<vector<edge>> g(n);
    for (long long i=0; i<m; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        g[--a].push_back(edge(--b, -c));
    }

    // 最短経路を記録する
    vector<long long> dist(n, INF);
    vector<bool> negative(n, false);
    dist[0] = 0;

    for (long long i=0; i<n-1; i++) {
        for (long long v=0; v<n; v++) {
            if (dist[v] >= INF/2) continue;
            for (auto e : g[v]) BF(dist[e.first], dist[v] + e.second);
        }
    }

    for (long long i=0; i<n; i++) {
        for (long long v=0; v<n; v++) {
            if (dist[v] >= INF/2) continue;
            for (auto e : g[v]) {
                if (BF(dist[e.first], dist[v] + e.second)) negative[e.first] = true;
                if (negative[v]) negative[e.first] = true;
            }
        }
    }
    if (!negative[n-1]) cout << -dist[n-1] << endl;
    else cout << "inf" << endl;
    return 0;
}
