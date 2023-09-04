#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n, k; cin >> n >> k;
                vector<int> h(n), p(n);

                for (auto& x: h) {
                        cin >> x;
                }
                for (auto& x: p) {
                        cin >> x;
                }

                vector<pair<int, int>> pairs;
                for (int i = 0; i < n; i++) {
                        pairs.push_back({p[i], h[i]});
                }
                sort(pairs.begin(), pairs.end());
                for (int i = 0; i < n; i++) {
                        p[i] = pairs[i].first;
                        h[i] = pairs[i].second;
                }

                int i = 0;
                int damage = k;
                while (i < n) {
                        if (k <= 0) {
                                break;
                        }

                        if (h[i] - damage <= 0) {
                                i++;
                                continue;
                        }

                        k -= p[i];
                        damage += k;
                }

                cout << (k <= 0 ? "NO" : "YES") << endl;
        }
}
