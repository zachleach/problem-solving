#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

class dsu {
        public:
                vector<int> parents, sizes;

                dsu(int n) {
                        parents.resize(n);
                        iota(parents.begin(), parents.end(), 0);
                        sizes.resize(n, 1);
                }

                int root(int u) {
                        return parents[u] == u ? u : parents[u] = root(parents[u]);
                }

                bool join(int u, int v) {
                        int a = root(u);
                        int b = root(v);
                        if (a == b) {
                                return false;
                        }

                        if(sizes[a] > sizes[b]) {
                                swap(a, b);
                        }
                        parents[a] = b;
                        sizes[b] += sizes[a];

                        return true;
                }
};


int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int T; cin >> T;
        while (T--) {
                int n, k;
                cin >> n >> k;

                string s, t;
                cin >> s >> t;

                dsu D(n + 1);
                for (int i = 0; i + k < n; i++) {
                        D.join(i, i + k);
                        D.join(i, i + k + 1);
                }

                vector<string> sparts(n), tparts(n);
                for (int i = 0; i < n; i++) {
                        sparts[D.root(i)] += s[i];
                        tparts[D.root(i)] += t[i];
                }

                bool flag = true;
                for (int i = 0; i < n; i++) {
                        sort(sparts[i].begin(), sparts[i].end());
                        sort(tparts[i].begin(), tparts[i].end());
                        if (sparts[i] != tparts[i]) {
                                flag = false;
                        }
                }

                if (flag == true) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}





































































