#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
  int parents[100010];
  int size[100010];
  
  // n 頂点のUnionFind を作成する
  void init (int n) {
    // 最初はすべてばらばらなので，みんな親
    for (int i=1; i<=n; i++) parents[i] = -1;
    // 最初はすべてばらばらなので，大きさ１
    for (int i=1; i<=n; i++) size[i] = 1;
  }
  
  // 頂点ｘの根を返す関数
  int root (int x) {
    while (true) {
      // -1 なら根（親）
      if (parents[x] == -1) break;
      else x = parents[x];
    }
    return x;
  }
  
  // 要素 u と v を統合する関数
	void unite(int u, int v) {
		int root_u = root(u);
		int root_v = root(v);
		
		if (root_u == root_v) return;
		if (size[root_u] < size[root_v]) {
			parents[root_u] = root_v;
			size[root_v] += size[root_u];
		}
		else {
			parents[root_v] = root_u;
			size[root_u] += size[root_v];
		}
	}
	
	// u, v が同じグループか判定する
	bool same (int u, int v) {
	  if (root(u) == root(v)) return true;
	  else return false;
	}
};

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> q(N), u(N), v(N);
    UnionFind UF;
    UF.init(N);
    for (int i=1; i<=Q; i++) {
      cin >> q[i] >> u[i] >> v[i];
      if (q[i] == 1) {
        UF.unite(u[i], v[i]);
      } else {
        if (UF.same(u[i], v[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
      }
    }
    return 0;
}
