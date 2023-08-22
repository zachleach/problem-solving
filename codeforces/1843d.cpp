#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

vector<vector<int>> vec;
vector<int> leaf_count;

bool is_leaf(int node, int parent) {
        return vec[node].size() == 1 && vec[node][0] == parent;
}

void dfs(int node, int parent) {
        if (is_leaf(node, parent)) {
                leaf_count[node] = 1;
                return;
        }

        for (int neighbor : vec[node]) {
                if (neighbor != parent) {
                        dfs(neighbor, node);
                        leaf_count[node] += leaf_count[neighbor];
                }
        }
}

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
        int t; cin >> t;
        while (t--) {
                int n; cin >> n;
                vec.assign(n, vector<int>());

                for (int i = 0; i < n - 1; i++) {
                        int u, v;
                        cin >> u >> v;
                        u--; v--;
                        vec[u].push_back(v);
                        vec[v].push_back(u);
                }

                leaf_count.assign(n, 0);
                dfs(0, -1);

                int q; cin >> q;
                for (int i = 0; i < q; i++) {
                        int x, y;
                        cin >> x >> y;
                        x--; y--;

                        long long ans = 1LL * leaf_count[x] * leaf_count[y];
                        cout << ans << endl;
                }
        }
}





































































